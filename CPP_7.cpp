```cpp
bool issame(vector<string> a, vector<string> b){
    return a == b;
}
vector<vector<string>> filter_by_substring(vector<string> strings, string substring){
    vector<vector<string>> result;
    for(string s : strings){
        bool is_same = true;
        vector<string> temp;
        temp.push_back(s);
        for(int i = 0; i < 2; i++){
            if(i == 1)
                temp[0] = substring;
            if(!issame(temp, strings)){
                is_same = false;
                break;
            }
            strings.pop_back();
        }
        if(is_same)    
            result.push_back(temp);
    }
    return result;
}