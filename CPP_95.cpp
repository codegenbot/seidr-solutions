if(dict.empty()) return false;
bool all_lower = true, all_upper = true;
for(const auto &entry : dict){
    for(char c : entry.first){
        if(islower(c)){
            all_upper = false;
        } else {
            all_lower = false;
        }
    }
}
return all_lower || all_upper;