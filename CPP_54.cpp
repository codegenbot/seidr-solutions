#include <string>
#include <map>
using namespace std;

bool same_chars(string s0, string s1) {
    if(s0.length() != s1.length())
        return false;
        
    map<char,int> count0, count1;
    
    for(auto c : s0)
        count0[c]++;
    for(auto c : s1)
        count1[c]++;
    
    return count0 == count1;
}