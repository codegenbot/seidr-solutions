```
#include <vector>
#include <algorithm>

bool isSame(std::vector<int> a, std::vector<int> b) {
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

std::vector<int> sortArray(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    return arr;
}