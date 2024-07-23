transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<bool> visited(26, false);
    int count = 0;
    for(char c : str){
        if(isalpha(c) && !visited[tolower(c) - 'a']){
            visited[tolower(c) - 'a'] = true;
            count++;
        }
    }
    return count;
}