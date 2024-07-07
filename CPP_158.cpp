#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string find_max(vector<string> words){
    string max_word = "";
    int max_unique_chars = 0;
    
    for(string word : words) {
        set<char> unique_chars(word.begin(), word.end());
        if(unique_chars.size() > max_unique_chars) {
            max_word = word;
            max_unique_chars = unique_chars.size();
        } else if(unique_chars.size() == max_unique_chars) {
            if(word < max_word) {
                max_word = word;
            }
        }
    }
    
    return max_word;
}