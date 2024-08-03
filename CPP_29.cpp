#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b){
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

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(const string& str : strings){
        if(str.find(prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}

int main(){
    vector<string> input = {"apple", "banana", "applesauce", "orange", "pinapple"};
    vector<string> expected = {"apple", "applesauce"};
    vector<string> output = filter_by_prefix(input, "app");

    assert(issame(output, expected));
    return 0;
}