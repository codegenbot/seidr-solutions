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

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;

}

int main() {
    vector<string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    string substring = "run";
    vector<string> expected = {strings[0], strings[2]};
    if (!issame(filter_by_substring(strings, substring), expected)) {
        cout << "Test failed" << endl;
    } else {
        cout << "Test passed" << endl;
    }
    return 0;
}