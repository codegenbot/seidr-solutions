#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(int i=0; i<lst.size(); i++){
        int count = 0;
        for(int j=0; j<lst[i].size(); j++){
            if((lst[i][j]-'0') % 2 != 0){
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + " in the string " + to_string(i) + " of the input.");
    }
    return result;
}

vector<bool> is_same(vector<string> a, vector<string> b){
    vector<bool> result;
    for(int i=0; i<a.size(); i++){
        if(a[i] == b[i]){
            result.push_back(true);
        }
        else{
            result.push_back(false);
        }
    }
    return result;
}

int main(){
    assert(is_same(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2 in the string 0 of the input.",
        "the number of odd elements 3 in the string 1 of the input.",
        "the number of odd elements 2 in the string 2 of the input."
    }));
    return 0;
}