transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<char> distinctChars;
    for(char c : str){
        if(find(distinctChars.begin(), distinctChars.end(), c) == distinctChars.end()){
            distinctChars.push_back(c);
        }
    }
    return distinctChars.size();
}