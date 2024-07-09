#include <vector>
using namespace std;

// Problem description: Given a list of strings and a prefix, create a function that returns all the strings from the list which start with the given prefix.

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto &s : strings) {
        if(s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;