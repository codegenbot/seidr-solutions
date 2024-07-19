#include <string>

bool issame(vector<string> a, vector<string> b){
    // function implementation
    return true;
}

vector<string> split_words(string txt);

int main(){
    assert(issame(split_words(""), {"0"}));
    return 0;
}