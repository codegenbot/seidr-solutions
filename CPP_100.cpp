#include <iostream>
#include <vector>
#include <cassert>

vector<int> make_a_pile(int n);

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> make_a_pile(int n){
    vector<int> stones;
    stones.push_back(n);
    for(int i = 1; i < n; ++i){
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
    std::cin >> n;
    vector<int> result = make_a_pile(n);
    for(int s : result){
        std::cout << s << " ";
    }
    return 0;
}