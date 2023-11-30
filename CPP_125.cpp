vector<string> split_words(string txt){
    vector<string> result;
    if(txt.find(' ') != string::npos){
        int start = 0;
        int end = txt.find(' ');
        while(end != string::npos){
            result.push_back(txt.substr(start, end-start));
            start = end + 1;
            end = txt.find(' ', start);
        }
        result.push_back(txt.substr(start, end-start));
    }
    else if(txt.find(',') != string::npos){
        int start = 0;
        int end = txt.find(',');
        while(end != string::npos){
            result.push_back(txt.substr(start, end-start));
            start = end + 1;
            end = txt.find(',', start);
        }
        result.push_back(txt.substr(start, end-start));
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