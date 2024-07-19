#include <string>

int count_chars(vector<string> lst){
    int count = 0;
    for(auto str : lst){
        count += str.size();
    }
    return count;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2){
    if(count_chars(lst1) < count_chars(lst2)){
        return lst1;
    }
    return lst2;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}