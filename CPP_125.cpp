#include <string>

bool issame(vector<string> a, vector<string> b){
    // function implementation
    return true;
}

vector<string> split_words(string txt); // Declare the function before using it

int main(){
    assert(issame(split_words(""), {"0"}));
    return 0;
}