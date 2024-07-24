#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int mainFunction() {
    if (!order_by_points({0,6,6,-76,-21,23,4}) || order_by_points({0,6,6,-76,-21,23,4}).size() != 7) return 1; 
    return 0; 
}

bool order_by_points(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size() - 1; i++) {
        if(issame({arr[i]}, {arr[i+1]}) && (arr[i] > arr[i+1])) return false;
    }
    return true;
}