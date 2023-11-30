string exchange(vector<int> lst1,vector<int> lst2){
    int odd_count = 0;
    for(int i=0; i<lst1.size(); i++){
        if(lst1[i] % 2 != 0){
            odd_count++;
        }
    }
    if(odd_count == 0){
        return "YES";
    }
    return "NO";
}