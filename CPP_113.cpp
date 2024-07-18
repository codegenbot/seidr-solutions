#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);

bool issame(vector<string> a, vector<string> b) {
    vector<string> result;
    
    for(string str : a){
        int count = 0;
        
        for(char c : str){
            if((c - '0') % 2 != 0){
                count++;
            }
        }
        
        string res = "The number of odd elements " + to_string(count) + "\nIn the string " + str + " of the input.\n";
        result.push_back(res);
    }
    
    // Check if a and b have the same content
    if (result == b) {
        return true;
    } else {
        return false;
    }
}