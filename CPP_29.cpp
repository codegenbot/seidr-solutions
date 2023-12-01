#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b);

vector<string> filter_by_prefix(vector<string> strings, string prefix);

int main() {
    vector<string> strings = {"apple", "banana", "cat", "dog", "elephant"};
    string prefix = "b";
    
    vector<string> filtered_strings = filter_by_prefix(strings, prefix);
    
    for(const auto& str : filtered_strings){
        cout << str << " ";
    }
    
    return 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(const auto& str : strings){
        if(str.compare(0, prefix.length(), prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}