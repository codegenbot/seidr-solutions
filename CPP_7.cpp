#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> filtered_strings;
    for(const string& s : strings){
        if(s.find(substring) != string::npos){
            filtered_strings.push_back(s);
        }
    }
    return filtered_strings;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
}