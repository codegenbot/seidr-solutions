#include <iostream>
#include <vector>
#include <string>

vector<string> odd_count(vector<string> lst);

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(string str : lst){
        int oddCount = 0;
        for(char c : str){
            if((c - '0') % 2 != 0){
                oddCount++;
            }
        }
        result.push_back("the number of odd elements " + to_string(oddCount) + "\n the string " + str + " of the input.");
    }
    return result;
}

int main() {
    assert(odd_count({"271", "137", "314"}) == vector<string> {
        "the number of odd elements 2\n the string 271 of the input.",
        "the number of odd elements 3\n the string 137 of the input.",
        "the number of odd elements 2\n the string 314 of the input."
    });

    return 0;
}