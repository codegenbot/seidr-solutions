#include <vector>
#include <string>

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> filtered;
    for(const string& str : strings){
        if(str.find(prefix) == 0){
            filtered.push_back(str);
        }
    }
    return filtered;
}