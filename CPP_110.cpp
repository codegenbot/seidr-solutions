string exchange(vector<int> lst1,vector<int> lst2){
    int count1 = 0;
    int count2 = 0;
    
    for(int i=0; i<lst1.size(); i++){
        if(lst1[i] % 2 != 0){
            count1++;
        }
    }
    
    for(int i=0; i<lst2.size(); i++){
        if(lst2[i] % 2 != 0){
            count2++;
        }
    }
    
    if(count1 > count2){
        return "NO";
    }
    else{
        return "YES";
    }
}