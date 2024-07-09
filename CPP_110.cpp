string exchange(vector<int> lst1,vector<int> lst2){
    int odd_count = 0;
    for(int num : lst1){
        if(num % 2 != 0) odd_count++;
    }
    return odd_count == 0 ? "YES" : "NO";
}