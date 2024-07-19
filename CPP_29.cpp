#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b){
    for(auto str : a){
        if(std::find(b.begin(), b.end(), str) == b.end()){
            return false;
        }
    }
    return true;
}

int main() {
    assert (issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx") , {"xxx", "xxxAAA", "xxx"}));
    return 0;
}