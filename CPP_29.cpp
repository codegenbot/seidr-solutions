#include <vector>
using namespace std;

// Problem description: Write a program that filters a given list of strings based on a provided prefix.
// The function should take two parameters: the list of strings and the prefix to filter by.
// It should return a new list containing only the strings from the original list that start with the given prefix.

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto &s : strings) {
        if(s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;