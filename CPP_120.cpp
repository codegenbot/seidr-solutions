#include <algorithm>
#include <vector>

bool issame(vector<int> a,vector<int>b){
    // your code here
}

std::vector<int> maximum(vector<int> arr, int k) {
    std::vector<int> result;
    for(int i = 0; i < k; i++){
        result.push_back(*std::max_element(arr.begin(),arr.end()));
        arr.erase(std::remove(arr.begin(), arr.end(), *std::max_element(arr.begin(),arr.end())), arr.end());
    }
    return result;
}

int main() {
    // your code here
}