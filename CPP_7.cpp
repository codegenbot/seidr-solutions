#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a, vector<string> b){
    // implementation of issame function
}

vector<string> filter_by_substring(vector<string> strings, string substring);

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    // other code

    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (string s : strings) {
        if (s.find(substring) != string::npos) {
            result.push_back(s);
        }
    }
    return result;
}