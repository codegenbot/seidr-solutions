#include <iostream>
#include <map>
#include <sstream>
#include <cassert>

using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    stringstream ss(test);
    string word;
    
    while (ss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    
    return result;
}