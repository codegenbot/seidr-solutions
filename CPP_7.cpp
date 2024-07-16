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
    // Test the filter_by_substring function
    vector<string> test_strings = {"apple", "banana", "orange", "grape"};
    string test_substring = "an";
    vector<string> filtered_result = filter_by_substring(test_strings, test_substring);
    
    for(const string& str : filtered_result){
        cout << str << " ";
    }
    
    return 0;
}