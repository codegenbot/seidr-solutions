#include <string>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2){
    if(count_chars(lst1) < count_chars(lst2)){
        return lst1;
    }
    return lst2;
}