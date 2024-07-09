#include <algorithm>
#include <string>
#include <vector>

string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end());
    for(string word : words){
        if(count(word.begin(), word.end(), unique(word.begin(), word.end())) > count(max_word.begin(), max_word.end(), unique(max_word.begin(), max_word.end()))){
            max_word = word;
        }
    }
    return max_word;
}

int main(){
    assert ((find_max({"play", "play", "play"}) == "play"));
    return 0;
}