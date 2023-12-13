```cpp
#include <iostream>
#include <string>
#include <vector>
#include <assert.h>

using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(const auto& str : strings){
        if(str.find(prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){  // Add missing space in function signature
    if(a.size() != b.size()){
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<string> input_strings = {"apple", "banana", "cherry"};
    string input_prefix = "b";
    vector<string> expected_output = {"banana"};

    vector<string> filtered_strings = filter_by_prefix(input_strings, input_prefix);

    assert(filtered_strings == expected_output);  // Change assertion to compare vectors with == operator

    return 0;
}
```