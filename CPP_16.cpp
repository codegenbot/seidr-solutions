#include<unordered_set>
int count_distinct_characters(string str){ 
    unordered_set<char> distinct_chars;
    for(char &ch : str) {
        distinct_chars.insert(tolower(ch));
    }
    return distinct_chars.size();
}