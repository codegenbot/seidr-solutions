#include <algorithm>

using namespace std;

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings) {
        if(std::find(s.begin(), s.end(), substring) != s.end())
            result.push_back(s);
    }
    return result;