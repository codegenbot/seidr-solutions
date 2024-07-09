#include <vector>
using namespace std;

// Filter a list of strings by prefix.
// Given a list of strings and a prefix string,
// return a new list that contains all the strings in the original list
// whose first character matches the given prefix.

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto &s : strings) {
        if(s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;