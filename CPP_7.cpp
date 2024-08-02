#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> filter_by_substring(const vector<string>& strings, const string& substring){
    vector<string> result;
    for(const auto& str : strings){
        if(str.find(substring) != string::npos){
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> filtered = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    assert(filtered.size() == 2 && filtered[0] == "grunt" && filtered[1] == "prune");
    return 0;
}