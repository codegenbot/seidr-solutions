vector<string> split_words(string txt){
    vector<string> result;
    if(txt.find(' ') != string::npos){
        size_t start = 0, end;
        while((end = txt.find(' ', start)) != string::npos){
            result.push_back(txt.substr(start, end - start));
            start = end + 1;
        }
        result.push_back(txt.substr(start));
    } else if(txt.find(',') != string::npos){
        size_t start = 0, end;
        while((end = txt.find(',', start)) != string::npos){
            result.push_back(txt.substr(start, end - start));
            start = end + 1;
        }
        result.push_back(txt.substr(start));
    } else {
        int odd_count = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 != 0){
                odd_count++;
            }
        }
        result.push_back(to_string(odd_count));
    }
    return result;
}