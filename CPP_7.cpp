```cpp
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (auto s : a) if (find(b.begin(),b.end(),s) == b.end()) return false;
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto str : strings){
        if(str.find(substring) != string::npos)
            result.push_back(str);
    }
    return result;

int main() {
    vector<string> input = {"grunt", "trumpet", "prune", "gruesome"};
    string substring = "run";
    vector<string> filtered = filter_by_substring(input, substring);
    if (!issame(filtered, vector<string>({"grunt", "prune"}))) 
        return 0;
    return 1;
}