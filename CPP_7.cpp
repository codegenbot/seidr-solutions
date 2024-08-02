#include <cassert>

vector<string> filter_by_substring(vector<string> strings, string substring);

bool is_same(vector<int> v1 , vector<int> v2);
bool is_same(vector<int> v1 , vector<int> v2){
    assert(v1.size() == v2.size());
    for(size_t i = 0; i < v1.size(); ++i){
        if(v1[i] != v2[i]){
            return false;
        }
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(const auto& str : strings){
        if(str.find(substring) != string::npos){
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    // Your main function logic here
    return 0;
}