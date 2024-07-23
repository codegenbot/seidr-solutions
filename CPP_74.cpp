int count1 = 0;
    int count2 = 0;
    
    for(const auto& str : lst1){
        count1 += str.size();
    }
    
    for(const auto& str : lst2){
        count2 += str.size();
    }
    
    if(count1 < count2){
        return lst1;
    }
    
    return lst2;
}