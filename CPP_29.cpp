#include <vector>
using namespace std;

// Filter a list of strings by prefix.
// Return a new vector containing all strings that start with the given prefix.

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto &s : strings) {
        if(s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;