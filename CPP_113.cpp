#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b);

vector<string> odd_count(vector<string> lst);

bool issame(vector<string> a, vector<string> b){
   if(a.size() != b.size()){
       return false;
   }
   for(int i=0; i<a.size(); i++){
       if(a[i] != b[i]){
           return false;
       }
   }
   return true;
}

vector<string> odd_count(vector<string> lst);

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(auto str : lst){
        int odd_count = 0;
        for(auto ch : str){
            if((ch - '0') % 2 != 0){
                odd_count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(odd_count) + " in the string " + str + " of the input.");
    }
    return result;
}

int main(){
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2 in the string 271 of the input.",
        "the number of odd elements 2 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    }));
    
    return 0;
}