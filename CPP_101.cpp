#include <algorithm>
#include <cassert>
#include <initializer_list>
#include <string>
#include <vector>

using namespace std;

vector<string> splitString(string str) {
    vector<string> words;
    string word;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += str[i];
        }
    }
    words.push_back(word);
    return words;
}

bool isSameVectors(vector<string> a, vector<string> b) { 
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int testMain() {
    vector<string> v1 = splitString("ahmed     , gamal");
    sort(v1.begin(), v1.end()); 
    assert(isSameVectors(splitString("ahmed     , gamal"), {"ahmed", "gamal"}));
    return 0;
}