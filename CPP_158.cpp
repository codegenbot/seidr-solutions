#include <iostream>
#include <string>
#include <vector>
using namespace std;

int find_max(vector<string> words){
    int max_length = 0;
    for (const string& word : words) {
        if (word.length() > max_length) {
            max_length = word.length();
        }
    }
    return max_length;
}

int main(){
    assert((find_max({"play", "play", "play"}) == 4));
    return 0;
}