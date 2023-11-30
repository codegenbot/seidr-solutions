string exchange(vector<int> lst1, vector<int> lst2){
    int count_odd = 0;
    for(int i=0; i<lst1.size(); i++){
        if(lst1[i] % 2 != 0){
            count_odd++;
        }
    }
    for(int i=0; i<lst2.size(); i++){
        if(lst2[i] % 2 != 0){
            count_odd++;
        }
    }
    if(count_odd % 2 == 0){
        return "YES";
    }
    else{
        return "NO";
    }
}