#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a,vector<string> b){
    return a.size() == b.size() && all_of(a.begin(), a.end(), [b](const string& s){ return find(b.begin(), b.end(), s) != b.end(); });
}

int main(){
    vector<string> strings = {"xxx", "asd", "xxy", "john doe", "xxxAaa", "xxx"};
    string prefix = "xxx";
    vector<string> result = filter_by_prefix(strings, prefix);
    
    assert (issame(result , {"xxx", "xxxAAA", "xxx"}));
    
    return 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings) {
        if(s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}