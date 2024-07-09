#include <vector>
using namespace std;

// Problem description: Given a vector of strings and a prefix string, write a function that filters the vector to include only the strings that start with the given prefix.

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto &s : strings) {
        if(s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;