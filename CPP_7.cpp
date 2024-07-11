```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    vector<string> strings = {"apple", "banana", "cherry"};
    string substring = "an";
    
    if (issame(filter_by_substring(strings, substring), {"banana"}))
        cout << "The vectors are the same." << endl;
    else
        cout << "The vectors are not the same." << endl;
    
    return 0;
}