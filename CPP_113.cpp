#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> count_odd_elements(const vector<string>& lst) {
    vector<string> result;
    for (const string& s : lst) {
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

int main() {
    assert(count_odd_elements({"271", "137", "314"}) == 
           vector<string>{"the number of odd elements 2 in the string 271 of the input.",
                          "the number of odd elements 2 in the string 137 of the input.",
                          "the number of odd elements 2 in the string 314 of the input."});
                          
    return 0;
}