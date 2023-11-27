#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (string s : lst) {
        int count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + " in the string " + s + " of the input.");
    }
    return result;
}