#include <vector>
#include <string>

bool issame(vector<string> a,vector<string> b){
    return a == b;
}

int main(){
    vector<string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    string prefix = "xxx";
    assert (issame(filter_by_prefix(strings, prefix) , vector<string>({"xxx", "xxxAAA", "xxx"})) );
}