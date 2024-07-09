#include <algorithm>
#include <string>
#include <vector>
#include <cassert>

int find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    return 0; 
}

int main(){
    assert(find_max({"play", "play", "play"}) == 0); 
    return 0;
}