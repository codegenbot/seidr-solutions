#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(const string& s : lst) {
        int odd_count = 0;
        for(char c : s) {
            if((c - '0') % 2 != 0) {
                odd_count++;
            }
        }
        string res = "The number of odd elements " + to_string(odd_count) + 
                     " in the string is " + to_string(odd_count) + 
                     " of the input.";
        result.push_back(res);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main(){
    assert (issame(odd_count({"271", "137", "314"}) , {
        "The number of odd elements 2 in the string is 2 of the input.",
        "The number of odd elements 3 in the string is 3 of the input.",
        "The number of odd elements 2 in the string is 2 of the input."
    }));
    cout << "Tests passed!" << endl;
    return 0;
}