#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string>& a, vector<string>& b){
    return a == b;
}

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for (string str : lst) {
        int count = 0;
        for (char c : str) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + " in the string " + str + " of the input.");
    }
    return result;
}

int main() {
    vector<string> a = {"apple", "banana", "cherry"};
    vector<string> b = {"apple", "banana", "cherry"};
    
    bool isSame = issame(a, b);
    
    vector<string> oddCountResult = odd_count(a);
    
    return 0;
}