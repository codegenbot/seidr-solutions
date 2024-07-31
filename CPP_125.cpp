vector<string> result;
    if(txt.find(' ')!=string::npos){
        string temp="";
        for(char c:txt){
            if(c==' '){
                result.push_back(temp);
                temp="";
            }
            else{
                temp+=c;
            }
        }
        result.push_back(temp);
    }
    else if(txt.find(',')!=string::npos){
        string temp="";
        for(char c:txt){
            if(c==','){
                result.push_back(temp);
                temp="";
            }
            else{
                temp+=c;
            }
        }
        result.push_back(temp);
    }
    else{
        int count=0;
        for(char c:txt){
            if(islower(c) && (c-'a')%2==1){
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    return result;