#include <iostream>
#include <vector>
#include <algorithm>

bool containSameStrings(vector<string> a, vector<string> b) {
    return a.size() == b.size() && std::all_of(a.begin(), a.end(), [&](const string& s) { 
        return find(b.begin(), b.end(), s) != b.end(); 
    });
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
    vector<string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    string substring = "run";
    vector<string> filteredStrings = filter_by_substring(strings, substring);

    if(containSameStrings(filteredStrings, {"grunt", "prune"})){
        cout << "The two vectors contain the same strings." << endl;
    } else {
        cout << "The two vectors do not contain the same strings." << endl;
    }
    
    return 0;
}