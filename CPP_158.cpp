#include <string>
using namespace std;

int find_max(vector<string> words){
    string max_word = "";
    int max_unique_chars = 0;
    
    for(const auto& word : words){
        set<char> unique_chars(word.begin(), word.end());
        if(unique_chars.size() > max_unique_chars){
            max_word = word;
            max_unique_chars = unique_chars.size();
        } else if(unique_chars.size() == max_unique_chars){
            max_word = min(max_word, word);
        }
    }
    
    return 0; 
}

int main() {
    assert ((find_max({"play", "play", "play"}) == "play"));
    return 0;
}