```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Your test cases here
    vector<string> strings = {"apple", "banana", "apricot"};
    string prefix = "ap";
    vector<string> result = filter_by_prefix(strings, prefix);
    
    // Test the issame function
    vector<string> a = {"apple", "apricot"};
    vector<string> b = {"apple", "apricot"};
    if (issame(a, b)) {
        cout << "The two vectors are the same" << endl;
    } else {
        cout << "The two vectors are not the same" << endl;
    }
    
    return 0;
}