if(dict.empty()) return false;
bool all_lower = true, all_upper = true;
for(auto &it : dict){
    string key = it.first;
    if(key.size() == 0){
        continue;
    }
    if(key[0]>='a' && key[0]<='z'){
        all_upper = false;
    } else if(key[0]>='A' && key[0]<='Z'){
        all_lower = false;
    } else{
        return false;
    }
}
return all_lower || all_upper;
}