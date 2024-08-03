#include <vector>

bool issame(int x, int y){
    return x == y;
}

std::vector<int> make_a_pile(int n);

int main(){
    int n;
    std::cin >> n;

    std::vector<int> result = make_a_pile(n);

    for(int i=0; i<result.size(); i++){
        std::cout << result[i] << " ";
    }

    return 0;
}

std::vector<int> make_a_pile(int n){
    std::vector<int> stones;
    stones.push_back(n);
    for(int i=1; i<n; i++){
        if(n % 2 == 0){
            n += 2;
        } else {
            n += 1;
        }
        stones.push_back(n);
    }
    return stones;
}