Here is the solution:

```cpp
string find_max(vector<string> words){
    string res = words[0];
    for(int i=1;i<words.size();i++){
        int count1 = 0;
        int count2 = 0;
        set<char> s1(res.begin(),res.end());
        set<char> s2(words[i].begin(),words[i].end());

        if(s1.size() > s2.size()){
            res = words[i];
        }else if(s1.size() == s2.size()){
            res = (s1 < s2) ? res : words[i];
        }
    }
    return res;
}