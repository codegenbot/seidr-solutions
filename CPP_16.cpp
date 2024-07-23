int count_distinct_characters(string str){
    vector<bool> present(26*2, false);
    int distinctCount = 0;
    for(char ch : str){
        if(ch >= 'A' && ch <= 'Z'){
            if(!present[ch - 'A']){
                present[ch - 'A'] = true;
                distinctCount++;
            }
        } else if(ch >= 'a' && ch <= 'z'){
            if(!present[ch - 'a' + 26]){
                present[ch - 'a' + 26] = true;
                distinctCount++;
            }
        }
    }
    return distinctCount;
}