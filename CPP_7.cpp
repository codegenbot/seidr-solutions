#include <algorithm>
#include <vector>
#include <string>

using namespace std;

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings) {
        if(algorithm::includes(s.begin(), s.end(), substring.begin(), substring.end())) 
            result.push_back(s);
    }
    return result;
}