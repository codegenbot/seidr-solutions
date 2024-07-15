if(dict.empty()) return false;
bool all_lowercase = true;
bool all_uppercase = true;
for(auto const& pair : dict){
    if(!islower(pair.first.front())) all_lowercase = false;
    if(!isupper(pair.first.front())) all_uppercase = false;
}
return all_lowercase || all_uppercase;
}