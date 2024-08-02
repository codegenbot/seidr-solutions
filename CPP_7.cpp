```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto str : strings) {
        if(str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> vec1 = {"apple", "banana", "cherry"};
    vector<string> vec2 = {"banana", "orange", "grape"};

    if(issame(filter_by_substring(vec1, "ba"), filter_by_substring(vec2, "or"))) {
        cout << "The vectors are the same" << endl;
    } else {
        cout << "The vectors are not the same" << endl;
    }

    return 0;
}