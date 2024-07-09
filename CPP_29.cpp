#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;

}

int main() {
    vector<string> inputStrings = {"xxx", "asd", "xxy", "john doe", "xxxAAC", "xxx"};
    string prefix = "xxx";
    
    vector<string> filteredStrings = filter_by_prefix(inputStrings, prefix);

    assert(issame(filteredStrings , {"xxx", "xxxAAA", "xxx"}));
}