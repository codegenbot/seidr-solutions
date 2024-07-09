```cpp
#include <vector>
#include <string>

using namespace std;

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings) {
        if(s.find(substring) != string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    bool b_;
    b_ = (a == b);
    return b_;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{"grunt", "prune"}));
    return 0;
}