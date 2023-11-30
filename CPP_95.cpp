bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    string firstKey = dict.begin()->first;
    bool isLowerCase = islower(firstKey[0]);
    
    for(auto entry : dict){
        string key = entry.first;
        if(islower(key[0]) != isLowerCase){
            return false;
        }
    }
    
    return true;
}