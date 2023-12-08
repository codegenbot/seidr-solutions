```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

/**
 * Returns true if the two vectors are identical, false otherwise
 */
bool issame(vector<string> a, vector<string> b);

/**
 * Returns a new vector containing strings that have the given prefix
 */
vector<string> filter_by_prefix(vector<string> strings, string prefix);

int main() {
    // Test the filter_by_prefix function
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));

    cout << "All test cases passed!" << endl;

    return 0;
}

bool issame(vector<string> a, vector<string> b){
    // Compare the two vectors
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> filteredStrings;
    for(const auto& str : strings){
        if(str.find(prefix) == 0){
            filteredStrings.push_back(str);
        }
    }
    return filteredStrings;
}
```