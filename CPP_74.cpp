int total_chars1 = 0, total_chars2 = 0;
    for(const auto& str : lst1){
        total_chars1 += str.size();
    }
    for(const auto& str : lst2){
        total_chars2 += str.size();
    }
    if(total_chars1 < total_chars2){
        return lst1;
    }
    return lst2;
}