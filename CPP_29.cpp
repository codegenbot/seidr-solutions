#include <vector>
using namespace std;

// Problem description: Write a function that filters out strings from a given vector of strings which do not start with the given prefix.

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto &s : strings) {
        if(s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;