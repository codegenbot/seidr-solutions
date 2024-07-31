#include <iostream>
#include <vector>

using namespace std;

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(auto str : lst){
        int count = 0;
        for(auto ch : str){
            if((ch - '0') % 2 != 0){
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + " in the string " + str + " of the input.");
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main(){
    assert(issame(odd_count({"271", "137", "314"}) , {
        "the number of odd elements 2 in the string 271 of the input.",
        "the number of odd elements 2 in the string 137 of the input.",
        "the number of odd elements 3 in the string 314 of the input."
    }));
}