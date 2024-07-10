Here is the solution to the problem:

```cpp
string find_max(vector<string> words){
    string res = "";
    int max_uniq = 0;
    for(auto word : words){
        unordered_set<char> uniq(word.begin(),word.end());
        if(uniq.size() > max_uniq){
            res = word;
            max_uniq = uniq.size();
        }
        else if(uniq.size() == max_uniq)
            res = (res < word) ? word : res;
    }
    return res;
}