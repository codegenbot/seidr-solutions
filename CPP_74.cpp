#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> b);

vector<string> total_match(vector<string> lst1, vector<string> lst2);

int main() {
    vector<string> lst1 = {"apple", "banana", "cherry"};
    vector<string> lst2 = {"orange", "grape"};
    
    vector<string> result = total_match(lst1, lst2);
    
    return 0;
}

bool issame(vector<string> a, vector<string> b) {
    int totalChars1 = 0;
    int totalChars2 = 0;
    
    for(string str : a){
        totalChars1 += str.length();
    }
    
    for(string str : b){
        totalChars2 += str.length();
    }
    
    if(totalChars1 < totalChars2){
        return true;
    }
    else{
        return false;
    }
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int totalChars1 = 0;
    int totalChars2 = 0;
    
    for(string str : lst1){
        totalChars1 += str.length();
    }
    
    for(string str : lst2){
        totalChars2 += str.length();
    }
    
    if(totalChars1 < totalChars2){
        return lst1;
    }
    else{
        return lst2;
    }
}