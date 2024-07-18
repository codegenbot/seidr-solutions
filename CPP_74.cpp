int total_chars1 = 0;
    int total_chars2 = 0;
    
    for(const string& s : lst1){
        total_chars1 += s.size();
    }
    
    for(const string& s : lst2){
        total_chars2 += s.size();
    }
    
    if(total_chars1 < total_chars2){
        return lst1;
    }
    
    return lst2;
}