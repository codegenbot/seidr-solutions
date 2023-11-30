vector<string> split_words(string txt){
    vector<string> result;
    if(txt.find(" ") != string::npos){
        size_t pos = 0;
        while((pos = txt.find(" ")) != string::npos){
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        result.push_back(txt);
    }
    else if(txt.find(",") != string::npos){
        size_t pos = 0;
        while((pos = txt.find(",")) != string::npos){
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        result.push_back(txt);
    }
    else{
        result.push_back(to_string(count_if(txt.begin(), txt.end(), [](char c){return islower(c);})));}
    return result;
}