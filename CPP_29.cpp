#include <vector>
#include <string>
#include <cassert>

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> filteredStrings;
    for(const auto& str : strings){
        if(str.find(prefix) == 0){
            filteredStrings.push_back(str);
        }
    }
    return filteredStrings;
}

bool equal(vector<string> a, vector<string> b) {
    return a == b;
}

int main(){
    assert (equal(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAA", 
                                    "xxx"}, "xxx"), {"xxx", "xxxAA", "xxx"}));
    return 0;
}