```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    vector<string> strings = {"hello", "hi", "hola", "goodbye"};
    string substring = "hi";
    vector<string> filtered = filter_by_substring(strings, substring);
    if(issame(filter_by_substring(filtered, substring), filtered))
        cout << "The result is the same as expected." << endl;
    else
        cout << "The result is not the same as expected." << endl;
    
    return 0;
}