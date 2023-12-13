```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

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

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<string> strings = {"apple", "banana", "orange"};
    string prefix = "ap";

    vector<string> filtered_strings = filter_by_prefix(strings, prefix);
    
    vector<string> expected_result = {"apple"};

    // verify the filtered_strings is equal to expected_result
    assert(filtered_strings == expected_result);

    return 0;
}
```