#include <iostream>
#include <vector>
#include <string>
#include <cassert>

#define NDEBUG 1

using namespace std;

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for (string s : lst) {
        int odd_count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                odd_count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(odd_count) + " in the string " + s + " of the input.");
    }
    return result;
}