string exchange(vector<int> lst1, vector<int> lst2){
    int cnt = 0;
    for(int i=0; i<lst1.size(); i++){
        if(lst1[i] % 2 != 0){
            cnt++;
        }
    }
    if(cnt > lst2.size()){
        return "NO";
    }
    return "YES";
}