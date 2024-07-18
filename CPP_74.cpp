#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    int totalChars1 = 0, totalChars2 = 0;
    
    for (const string& str : lst1) {
        totalChars1 += str.size();
    }
    
    for (const string& str : lst2) {
        totalChars2 += str.size();
    }
    
    if (totalChars1 < totalChars2) {
        return lst1;
    } else {
        return (totalChars1 == totalChars2) ? lst1 : lst2;
    }
}