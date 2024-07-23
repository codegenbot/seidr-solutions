if(dict.empty()) return false;
bool isLower = true, isUpper = true;
for(auto const &entry : dict){
    if(entry.first != tolower(entry.first[0])) isLower = false;
    if(entry.first != toupper(entry.first[0])) isUpper = false;
}
return isLower || isUpper;
}