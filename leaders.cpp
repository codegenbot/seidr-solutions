#include <vector>
#include <iostream>
#include <initializer_list>

int main() {
    std::vector<int> arr = {16, 17, 4, 3, 5, 2};
    std::cout << "Leaders: ";
    for (auto leader : leaders(arr)) {
        std::cout << leader << " ";
    }
    std::cout << std::endl;
    return 0;

}

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;

    for(int i=n-1; i>=0; --i){
        bool isLeader = true;
        for(int j=i-1; j>=0; --j){
            if(arr[j] >= arr[i]){
                isLeader = false;
                break;
            }
        }
        if(isLeader) res.push_back(arr[i]);
    }

    return res;
}