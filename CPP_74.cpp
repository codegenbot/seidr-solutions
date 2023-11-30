vector<string> total_match(vector<string> lst1,vector<string> lst2){
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < lst1.size(); i++){
        sum1 += lst1[i].length();
    }
    for(int i = 0; i < lst2.size(); i++){
        sum2 += lst2[i].length();
    }
    if(sum1 < sum2){
        return lst1;
    }
    else{
        return lst2;
    }
}