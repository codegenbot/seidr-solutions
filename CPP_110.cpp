string exchange(vector<int> lst1,vector<int> lst2){
    int sum = 0;
    // Calculate the sum of odd numbers in lst1
    for(int i=0; i<lst1.size(); i++){
        if(lst1[i] % 2 != 0){
            sum += lst1[i];
        }
    }
    
    // Calculate the sum of odd numbers in lst2
    for(int i=0; i<lst2.size(); i++){
        if(lst2[i] % 2 != 0){
            sum -= lst2[i];
        }
    }
    
    // If sum is less than or equal to 0, it means all elements in lst1 are even
    return (sum <= 0) ? "YES" : "NO";
}