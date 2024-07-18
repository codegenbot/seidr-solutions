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

int main(){
    assert (issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2 in the string 271 of the input.",
        "the number of odd elements 2 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    }));
    
    return 0;
}