Here is the completed code:

bool check_dict_case(map<string,string> dict){
    if(dict.empty())
        return false;

    string first_key = *(dict.begin())->first;
    for(auto it = dict.begin(); it != dict.end(); ++it) {
        if(first_key[0] >= 'a' && first_key[0] <= 'z')
            for(; it != dict.end(); ++it)
                if(toupper(it->first)[0] >='A' && toupper(it->first)[0] <='Z')
                    return false;
        else
            for(; it != dict.end(); ++it)
                if(tolower(it->first)[0] >= 'a' && tolower(it->first)[0] <= 'z')
                    return false;
    }
    return true;