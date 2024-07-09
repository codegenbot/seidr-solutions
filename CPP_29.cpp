#include <vector>
using namespace std;

// Problem description: Write a function that filters a given list of strings and returns the ones that start with a certain prefix.

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto &s : strings) {
        if(s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;