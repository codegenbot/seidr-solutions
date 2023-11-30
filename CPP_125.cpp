vector<string> split_words(string txt){
    vector<string> result;

    if(txt.find(' ') != string::npos){
        size_t pos = 0;
        while((pos = txt.find(' ')) != string::npos){
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        result.push_back(txt);
    }
    else if(txt.find(',') != string::npos){
        size_t pos = 0;
        while((pos = txt.find(',')) != string::npos){
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        result.push_back(txt);
    }
    else{
        int count = 0;
        for(char c : txt){
            if(islower(c)){
                count++;
            }
        }
        result.push_back(to_string(count));
    }

    return result;
}