vector<string> split_words(string txt){
    vector<string> result;
    if(txt.find(' ') != string::npos){
        string delimiter = " ";
        size_t pos = 0;
        string token;
        while ((pos = txt.find(delimiter)) != string::npos) {
            token = txt.substr(0, pos);
            result.push_back(token);
            txt.erase(0, pos + delimiter.length());
        }
        result.push_back(txt);
    }
    else if(txt.find(',') != string::npos){
        string delimiter = ",";
        size_t pos = 0;
        string token;
        while ((pos = txt.find(delimiter)) != string::npos) {
            token = txt.substr(0, pos);
            result.push_back(token);
            txt.erase(0, pos + delimiter.length());
        }
        result.push_back(txt);
    }
    else{
        int count = 0;
        for(char c : txt){
            if(islower(c)){
                int index = c - 'a';
                if(index % 2 == 1)
                    count++;
            }
        }
        result.push_back(to_string(count));
    }
    return result;
}