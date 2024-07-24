if(dict.empty()){
    return false;
}
bool isLowerCase = true;
bool isUpperCase = true;
for(auto const& pair : dict){
    string key = pair.first;
    for(char c : key){
        if(!islower(c)){
            isLowerCase = false;
        }
        if(!isupper(c)){
            isUpperCase = false;
        }
    }
}
return isLowerCase || isUpperCase;
}