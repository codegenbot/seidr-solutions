#include <vector>
#include <string>
#include <cassert>
#include <iostream>

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

bool is_same(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}


int main() {
    assert (is_same(odd_count({"271", "137", "314"}) , {
        "the number of odd elements 2 in the string 271 of the input.",
        "the number of odd elements 3 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    }));

    assert (is_same(odd_count({"512", "246", "888", "777"}), {
        "the number of odd elements 0 in the string 512 of the input.",
        "the number of odd elements 0 in the string 246 of the input.",
        "the number of odd elements 0 in the string 888 of the input.",
        "the number of odd elements 3 in the string 777 of the input."
    }));
    
    return 0;
}