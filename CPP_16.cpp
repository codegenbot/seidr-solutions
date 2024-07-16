transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<bool> visited(256, false);
    
    int count = 0;
    for(char c : str){
        if(!visited[c]){
            visited[c] = true;
            count++;
        }
    }
    return count;
}