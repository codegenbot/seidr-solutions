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

int main() {
    assert(odd_count({"271", "137", "314"}) == vector<string>{"the number of odd elements 2 in the string 271 of the input.", 
                                                             "the number of odd elements 2 in the string 137 of the input.", 
                                                             "the number of odd elements 2 in the string 314 of the input."});
    
    return 0;
}