```
#include <vector>
#include <string>

bool total_match(const vector<string>& a, const vector<string>& b) {
    // Check that both vectors have the same size
    if (a.size() != b.size()) {
        return false;
    }
    
    // Check that all strings in the input vectors are equal
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    // If we reach this point, all strings in both vectors are equal
    return true;
}
```