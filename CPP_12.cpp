#include <string>
#include <vector>
#include <algorithm>

string longest(vector<string> strings){
    assert(!strings.empty());
    
    string longestStr = *max_element(strings.begin(), strings.end());
    
    return longestStr;
}