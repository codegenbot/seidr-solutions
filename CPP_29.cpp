#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a,vector<string> b){
    return a.size() == b.size() && all_of(a.begin(), a.end(), [b](const string& s){ return find(b.begin(), b.end(), s) != b.end(); });
}

int main(){
    assert (issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAaa", "xxx"}, "xxx") , {"xxx", "xxxAAA", "xxx"}));
    return 0;
}