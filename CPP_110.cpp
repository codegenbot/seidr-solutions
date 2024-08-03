string exchange(vector<int> lst1,vector<int> lst2){
    for(int x: lst1){
        if(x%2!=0) return "NO";
    }
    for(int y: lst2){
        if(y%2==0) return "NO";
    }
    return "YES";
}