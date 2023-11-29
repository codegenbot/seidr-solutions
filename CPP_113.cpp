#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> odd_count(vector<string> lst);

int main(){
    assert (odd_count({"271", "137", "314"}) == vector<string>{
        "the number of odd elements 2\n the string 1 of the input.",
        "the number of odd elements 2\n the string 2 of the input.",
        "the number of odd elements 3\n the string 3 of the input."
    });
    
    return 0;
}

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(int i=0; i<lst.size(); i++){
        int count = 0;
        for(int j=0; j<lst[i].length(); j++){
            if((lst[i][j]-'0')%2 != 0){
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + "\n the string " + to_string(i+1) + " of the input.");
    }
    return result;
}