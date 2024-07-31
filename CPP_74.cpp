int totalChars(vector<string> lst){
    int sum = 0;
    for(string str : lst){
        sum += str.size();
    }
    return sum;
}

vector<string> total_match(vector<string> lst1,vector<string> lst2){
    if(totalChars(lst1) < totalChars(lst2)){
        return lst1;
    }
    return totalChars(lst1) == totalChars(lst2) ? lst1 : lst2;
}