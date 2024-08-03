#include <iostream>
#include <vector>
#include <cassert>

bool issame(int a, int b){
    return a == b;
}

std::vector<int> make_a_pile(int n);

int main(){
    int n;
    std::cin >> n;

    std::vector<int> result = make_a_pile(n);

    for(int i=0; i<result.size(); i++){
        std::cout << result[i] << " ";
    }

    assert(issame(make_a_pile(8).back(), 22));
   
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