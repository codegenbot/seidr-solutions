#include <cassert>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool compare(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> filter_by_substring(vector<string> words, string sub) {
    vector<string> result;
    for (const auto& word : words) {
        if(word.find(sub) != string::npos) {
            result.push_back(word); 
        }
    }
    return result;
}

int main_function() {
    vector<string> words = {"grunt", "trumpet", "prune", "gruesome"};
    string sub = "run";
    vector<string> result = filter_by_substring(words, sub);
    assert(result == vector<string>({"grunt", "prune"}));
    for (const auto& word : result) {
        if(word.find("run") != string::npos) {
            cout << word << endl;
        }
    }
    return 0;
}