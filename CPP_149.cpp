```cpp
#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    return result;
}

int main() {
    vector<string> list = {"apple", "banana", "cherry", "date", "elderberry"};
    vector<string> sorted = sorted_list_sum(list);
    
    assert(issame(sorted, {"apple", "banana"}));
    cout << (issame(sorted, {"apple", "banana"}) ? "The sorted list is the same as expected." : "The sorted list is not what was expected.") << endl;
    
    return 0;
}