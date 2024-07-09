bool check_dict_case(map<string,string> dict){
    for(auto& pair : dict) {
        if(dict.count(to_string(pair.first).convert_to_lower()) == 0 && 
           dict.count(to_string(pair.first).convert_to_upper()) == 0)
            return false;
    }
    return true;
}