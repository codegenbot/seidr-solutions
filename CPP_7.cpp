#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

bool issame(vector<string> a,vector<string> b);

vector<string> filter_by_substring(vector<string> strings, string substring);

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (auto str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(vector<string> a,vector<string> b){
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    assert(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"},"run") == vector<string>{"grunt", "prune"});
    return 0;
}