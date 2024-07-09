#include <vector>
using namespace std;

// Write a function that filters out all strings in the input vector that do not start with the given prefix.
vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto &s : strings) {
        if(s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;