#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(string str : lst){
        int count = 0;
        for(char c : str){
            if((c - '0') % 2 != 0){
                count++;
            }
        }
        string res = "the number of odd elements " + to_string(count) + " in the string " + str + " of the input.";
        result.push_back(res);
    }
    return result;
}

int main() {
    assert(odd_count({"271", "137", "314"}) == 
           vector<string>{"the number of odd elements 2 in the string 271 of the input.",
                          "the number of odd elements 2 in the string 137 of the input.",
                          "the number of odd elements 2 in the string 314 of the input."});
                          
    return 0;
}