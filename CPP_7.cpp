```cpp
#include <vector>
#include <string>

using namespace std;

// Function to check if two vectors of strings are equal
bool issame(vector<string> a, vector<string> b){
    return a == b;
}

// Function to filter strings by substring
vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    assert (issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{"grunt", "prune"}));
    return 0;
}