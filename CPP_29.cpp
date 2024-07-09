#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool sameVectors(vector<string> a, vector<string> b){
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

}

int main() {
    assert (sameVectors(filter_by_prefix(vector<string>({"xxx", "asd", "xxy", "john doe", "xxxAAs", "xxx"}), "xxx"), vector<string>({"xxx", "xxxAAA", "xxx"})));
    vector<string> strings;
    string prefix;
    cout << "Enter the list of strings (space separated): ";
    getline(cin, prefix);
    strings = split(prefix, ' ');
    vector<string> filteredStrings = filter_by_prefix(strings, prefix);
    for(auto it = filteredStrings.begin(); it != filteredStrings.end(); ++it)
        cout << *it << endl;
    return 0;
}