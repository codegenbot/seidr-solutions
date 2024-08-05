#include <iostream>
#include <vector>
#include <cassert>

int can_arrange(std::vector<int> arr);

int can_arrange(std::vector<int> arr){
    int maxIndex = -1;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] < arr[i-1]){
            maxIndex = i - 1;
        }
    }
    return maxIndex;
}

void solve(){
    std::vector<int> arr;
    int n, input;
    
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> input;
        arr.push_back(input);
    }
    
    int result = can_arrange(arr);
    std::cout << result << std::endl;
}

int main(){
    solve();
    return 0;
}