vector<string> split_words(string txt){
    vector<string> result;
    size_t found = txt.find(" ");
    if(found != string::npos){
        size_t commaFound = txt.find(",");
        if(commaFound != string::npos){
            replace(txt.begin(), txt.end(), ',', ' ');
            found = txt.find(" ");
            int i = 0;
            while(found != string::npos){
                result.push_back(txt.substr(i, found-i));
                i = found+1;
                found = txt.find(" ", i);
            }
            result.push_back(txt.substr(i, found-i));
        }
        else{
            int i = 0;
            while(found != string::npos){
                result.push_back(txt.substr(i, found-i));
                i = found+1;
                found = txt.find(" ", i);
            }
            result.push_back(txt.substr(i, found-i));
        }
    }
    else if (txt.find(",") != string::npos){
        replace(txt.begin(), txt.end(), ',', ' ');
        int i = 0;
        int found = txt.find(" ");
        while(found != string::npos){
            result.push_back(txt.substr(i, found-i));
            i = found+1;
            found = txt.find(" ", i);
        }
        result.push_back(txt.substr(i, found-i));
    }
    else{
        int count = 0;
        for(int i=0; i<txt.length(); i++){
            if(islower(txt[i])){
                int order = txt[i] - 'a';
                if(order % 2 == 1){
                    count++;
                }
            }
        }
        result.push_back(to_string(count));
    }
    return result;
}