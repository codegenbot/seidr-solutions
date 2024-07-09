#include <vector>
using namespace std;

// Problem description: Write a program that filters a list of strings based on the prefix.
// The function should take two parameters: a vector of strings and a string to be used as the prefix.
// It should return a new vector containing only the strings from the original list that start with the given prefix.

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto &s : strings) {
        if(s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;