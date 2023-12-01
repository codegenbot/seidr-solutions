#include <iostream>
#include <vector>
using namespace std;

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(int i=0; i<lst.size(); i++){
        int oddCount = 0;
        for(int j=0; j<lst[i].length(); j++){
            if((lst[i][j] - '0') % 2 != 0){
                oddCount++;
            }
        }
        string output = "the number of odd elements " + to_string(oddCount) + " in the string " + to_string(i+1) + " of the input.";
        result.push_back(output);
    }
    return result;
}

int main() {
    assert(odd_count({"271", "137", "314"}) == vector<string>{
        "the number of odd elements 2 in the string 1 of the input.",
        "the number of odd elements 3 in the string 2 of the input.",
        "the number of odd elements 2 in the string 3 of the input."
    });
    return 0;
}