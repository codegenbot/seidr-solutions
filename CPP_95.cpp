Here's the solution:

bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    bool case_type = (dict.begin()->first)[0] >= 'a';
    
    for(auto& it : dict){
        if((it.first)[0] < 'a' || (it.first)[0] > 'z')
            return false;
        if(case_type != ((it.first)[0] <='a'))
            return false;
    }
    
    return true;
}