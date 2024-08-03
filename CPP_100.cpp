#include <iostream>
#include <vector>

using namespace std;

bool issame(const std::vector<int>& stones){
    for(int i=0; i<stones.size()-1; i++){
        if(stones[i] != stones[i+1]){
            return false;
        }
    }
    return true;
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

int main(){
    int n;
    std::cin >> n;
    std::vector<int> result = make_a_pile(n);
    if(issame(result)){
        std::cout << "All stones in the pile are the same." << std::endl;
    } else {
        std::cout << "Stones in the pile are not all the same." << std::endl;
    }
    
    return 0;
}