#include <vector>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    
    return true;
}

void sort_array(vector<int>& array) {
    if(array.empty()) return;
    
    int sum = array.front() + array.back();
    if(sum % 2 == 0) {
        sort(array.begin(), array.end(), greater<int>());
    } else {
        sort(array.begin(), array.end());
    }
}

int main() {
    // Add main function code here
    return 0;
}