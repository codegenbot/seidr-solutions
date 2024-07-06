#include <vector>
#include <string>

// Function to check if two vectors contain the same strings
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

// Function to filter strings containing a given substring
vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto str : strings){
        if(str.find(substring) != string::npos)
            result.push_back(str);
    }
    return result;
}

int main() {
    // Use the declared functions
    assert (issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{"grunt", "prune"}));
    return 0;
}