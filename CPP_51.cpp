string::iterator it = text.begin();
while(it != text.end()){
    if(*it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' || *it == 'u' 
       || tolower(*it) == 'a' || tolower(*it) == 'e' || tolower(*it) == 'i' || 
       tolower(*it) == 'o' || tolower(*it) == 'u'){
        text.erase(it);
        if(it != text.end()){
            it = text.begin();
        }
    } else {
        ++it;
    }
}
return text;