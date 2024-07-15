#include <cassert>

bool are_same(vector<string> vec1, vector<string> vec2){
    return vec1 == vec2;
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
    vector<string> input = {"apple", "banana", "apricot", "orange"};
    vector<string> expected_output = {"apple", "apricot"};
    
    vector<string> filtered_strings = filter_by_prefix(input, "a");
    assert(are_same(filtered_strings, expected_output));

    return 0;
}