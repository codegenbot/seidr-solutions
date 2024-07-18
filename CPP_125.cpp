#include <vector>
#include <string>
#include <cctype>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b);

vector<string> split_words(string txt){
    vector<string> result;
    // Your existing implementation for split_words function
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main(){
    assert(issame(split_words(""), {"0"}));
    return 0;
}