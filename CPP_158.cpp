```
vector<string> maxWord;
int maxUniqueChars = 0;

for(auto word : words){
    int uniqueChars = 0;
    set<char> seen;
    for(char c : word){
        if(seen.insert(c).second){
            uniqueChars++;
        }
    }

    if(uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < *maxWord.begin())){
        maxWord.clear();
        maxWord.push_back(word);
        maxUniqueChars = uniqueChars;
    }
}

return *maxWord.begin();