#include <cassert>

vector<string> filter_by_substring(vector<string> strings, string substring);

bool is_same(int x, int y){
    return x == y;
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

int main(){
    // Test the functions here
    return 0;
}