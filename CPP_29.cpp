#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for(size_t i = 0; i < a.size(); ++i)
        if(a[i] != b[i]) return false;
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto it = strings.begin(); it != strings.end(); ++it){
        if(it->find(prefix) == string::npos)
            result.push_back(*it);
    }
    return result;

int main() {
    vector<string> strings = {"xxx", "asd", "xxy", "john doe", "xxxAAs", "xxx"};
    vector<string> expected = {"asd", "xxy", "john doe", "xxxAAs"};
    assert(issame(filter_by_prefix(strings, "xxx"), expected));
    return 0;
}