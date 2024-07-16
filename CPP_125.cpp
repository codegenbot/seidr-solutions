vector<string> split_words(string txt){
    vector<string> result;
    size_t found = txt.find(' ');
    if(found != string::npos){
        size_t pos = 0;
        while(found != string::npos){
            result.push_back(txt.substr(pos, found - pos));
            pos = found + 1;
            found = txt.find(' ', pos);
        }
        result.push_back(txt.substr(pos));
    }else{
        found = txt.find(',');
        if(found != string::npos){
            size_t pos = 0;
            while(found != string::npos){
                result.push_back(txt.substr(pos, found - pos));
                pos = found + 1;
                found = txt.find(',', pos);
            }
            result.push_back(txt.substr(pos));
        }else{
            int count = 0;
            for(char c : txt){
                if(islower(c) && (c - 'a') % 2 == 1){
                    count++;
                }
            }
            result.push_back(to_string(count));
        }
    }
    return result;
}