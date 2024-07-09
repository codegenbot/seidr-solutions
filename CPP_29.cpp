#include <vector>
#include <string>

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
    assert (issame(filter_by_prefix(vector<string>({"xxx", "asd", "xxy", "john doe", "xxxAAs", "xxx"}), "xxx"), vector<string>({"xxx", "xxxAAA", "xxx"})));
    return 0;
}