int count_distinct_characters(string str){
    string temp = str;
    transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
    vector<char> vec;
    for(int i=0; i<temp.length(); i++){
        if(find(vec.begin(), vec.end(), temp[i]) == vec.end())
            vec.push_back(temp[i]);
    }
    return vec.size();
}