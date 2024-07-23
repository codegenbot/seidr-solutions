```cpp
bool isSame(vector<string> a, vector<string> words){
    if(a.size() != words.size())
        return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != words[i])
            return false;
    }
    return true;
}