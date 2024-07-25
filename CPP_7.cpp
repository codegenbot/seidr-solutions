#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) 
        return false;
        
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    
    return true;
}

vector<vector<string>> filter_by_substring(vector<string> list, string target) {
    vector<vector<string>> result;
    for(string s : list) {
        if(s.find(target) != string::npos) {
            vector<string> temp = {s};
            result.push_back(temp);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> input_list = {"grunt", "trumpet", "prune", "gruesome"};
    std::string target_string = "run";
    
    // Use the filter_by_substring function
    vector<vector<string>> output = filter_by_substring(input_list, target_string);
    
    bool result = issame(output[0], {"grunt", "prune"});
    assert(result);
    return 0;
}