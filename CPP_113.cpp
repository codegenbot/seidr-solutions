#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(string s : lst){
        int odd_count = 0;
        for(char c : s){
            if((c - '0') % 2 != 0){
                odd_count++;
            }
        }
        string res = "the number of odd elements " + to_string(odd_count) + " in the string " + s + " of the input.";
        result.push_back(res);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

```