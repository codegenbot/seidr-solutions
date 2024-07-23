if(dict.empty()) return false;
bool isLower = true, isUpper = true;
for(const auto& entry : dict){
    if(entry.first.empty() || !isalpha(entry.first[0])) return false;
    if(!isLower && !isUpper) return false;
    if(isLower && !islower(entry.first[0])) isLower = false;
    if(isUpper && !isupper(entry.first[0])) isUpper = false;
}
return isLower || isUpper;
}