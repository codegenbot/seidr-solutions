#include <vector>
#include <algorithm>

bool issame(std::vector<int> a,std::vector<int>b){
    if(a.size()!=b.size())
        return false;
    for(int i=0; i<a.size();i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    for (int i = 0; i < k; ++i) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it-1); // Erase the maximum element from array
    }
    return result;
}

int main() {
    return 0;
}