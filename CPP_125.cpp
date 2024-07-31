vector<string> split_words(string txt){
        vector<string> result;
        string word;
        if(txt.find(' ') != string::npos){
            size_t start = 0, end;
            while((end = txt.find(' ', start)) != string::npos){
                word = txt.substr(start, end - start);
                result.push_back(word);
                start = end + 1;
            }
            result.push_back(txt.substr(start));
        }
        else if(txt.find(',') != string::npos){
            size_t start = 0, end;
            while((end = txt.find(',', start)) != string::npos){
                word = txt.substr(start, end - start);
                result.push_back(word);
                start = end + 1;
            }
            result.push_back(txt.substr(start));
        }
        else{
            int oddChars = 0;
            for(char c : txt){
                if(islower(c) && ((c - 'a') % 2 != 0))
                    oddChars++;
            }
            result.push_back(to_string(oddChars));
        }
        return result;
    }