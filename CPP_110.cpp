string exchange(vector<int> lst1,vector<int> lst2){
    int sum1 = 0, sum2 = 0;
    for(int i=0; i<lst1.size(); i++){
        if(lst1[i] % 2 != 0){
            sum1 += lst1[i];
        }
    }
    for(int i=0; i<lst2.size(); i++){
        if(lst2[i] % 2 != 0){
            sum2 += lst2[i];
        }
    }
    return (sum1 <= sum2) ? "YES" : "NO";
}