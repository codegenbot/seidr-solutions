#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> filtered_strings;
    for(const string& str : strings){
        if(str.find(substring) != string::npos){
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main(){
    // Code to test the functions
    return 0;
}