int count_distinct_characters(string str){
    vector<char> distinctChars;
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    for(char ch : str){
        if(find(distinctChars.begin(), distinctChars.end(), ch) == distinctChars.end()){
            distinctChars.push_back(ch);
        }
    }

    return distinctChars.size();
}