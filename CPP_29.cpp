#include <vector>
using namespace std;

// Problem description: Write a function that filters a list of strings based on a given prefix.
// The function should return all the strings from the input list that start with the given prefix.

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto &s : strings) {
        if(s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;