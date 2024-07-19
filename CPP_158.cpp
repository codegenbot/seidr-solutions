sort(words.begin(), words.end());
string result;
int max_unique = 0;
for(const auto& word : words){
    int curr_unique = unordered_set<char>(word.begin(), word.end()).size();
    if(curr_unique > max_unique || (curr_unique == max_unique && word < result)){
        max_unique = curr_unique;
        result = word;
    }
}
return result;
}