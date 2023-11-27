#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2);
bool issame(vector<string> a, vector<string> b);

bool issame(vector<string> a, vector<string> b){
    if(a.size()!=b.size()){
        return false;
    }
    for(int i = 0; i<a.size(); i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}

vector<string> total_match(vector<string> lst1,vector<string> lst2){
    int total1 = 0;
    int total2 = 0;
    
    for(string str : lst1){
        total1 += str.length();
    }
    
    for(string str : lst2){
        total2 += str.length();
    }
    
    if(total1 < total2){
        return lst1;
    }
    else{
        return lst2;
    }
}

int main(){
    assert(issame(total_match({"this"}, {}) , {}));
    
    return 0;
}