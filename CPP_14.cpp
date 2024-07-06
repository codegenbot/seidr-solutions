#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> a_) {
    if(a.size()!=a_.size())
        return false;
    for(int i=0; i<a.size();i++)
        if(a[i] != a_[i])
            return false;
    return true;
}

vector<string> all_prefixes(string str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    vector<string> expected = {"W", "WW", "WWW"};
    assert (issame(all_prefixes("WWW"), expected));
    return 0;
}