#include <vector>
#include <algorithm>

bool same(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

bool issame(std::vector<int> v1, std::vector<int> v2) {
    return same(v1, v2);
}

std::vector<int> maximumElement(std::vector<int> a) {  
    int max = *max_element(a.begin(), a.end());          
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == max) return {a[i]} ;                     
    }
    return {};                                                 
}

int main() {
    int n;
    cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    int maxElement = *max_element(a.begin(), a.end()); 
    if (!issame({maxElement}, maximum(a))) return 1;
    return 0;
}