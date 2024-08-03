#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(const string& str : strings){
        if(str.find(substring) == 0){
            result.push_back(str);
        }
    }
    return result;
}