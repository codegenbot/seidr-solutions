#include <vector>

bool issame(int a, int b) {
    return (a == b);
}

vector<int> make_a_pile(int n) {
    vector<int> stones;
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

int main() {
    int n;
    cin >> n;

    vector<int> stones = make_a_pile(n);

    for(int i=0; i<stones.size()-1; i++){
        if(issame(stones[i], stones[i+1])){
            cout << "Same\n";
        } else {
            cout << "Different\n";
        }
    }

    return 0;
}