int total_chars(vector<string> lst){
    int total = 0;
    for(string str : lst){
        total += str.length();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2){
    int total1 = total_chars(lst1);
    int total2 = total_chars(lst2);
    
    if(total1 < total2)
        return lst1;
    else
        return lst2;
}