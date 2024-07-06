#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;

    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i])
            return false;
    }

    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto str : strings){
        if(str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;

}

int test() {
    vector<string> strings = {"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"};
    string prefix = "xxx";
    vector<string> filteredStrings = filter_by_prefix(strings, prefix);
    bool isSame = issame(filteredStrings, { "xxx", "xxxAAA", "xxx" });
    return isSame ? 0 : 1;
}

int main() {
    if(test())
        return 1;
    else
        return 0;
}