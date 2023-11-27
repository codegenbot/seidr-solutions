string exchange(vector<int> lst1,vector<int> lst2){
    int sum1 = 0, sum2 = 0;
    int oddCount1 = 0, oddCount2 = 0;
    
    for(int num : lst1){
        sum1 += num;
        if(num % 2 != 0){
            oddCount1++;
        }
    }
    
    for(int num : lst2){
        sum2 += num;
        if(num % 2 != 0){
            oddCount2++;
        }
    }
    
    if(sum1 % 2 == 0){
        return "YES";
    }
    
    if(sum2 % 2 == 0){
        return "YES";
    }
    
    if(oddCount1 > 0 && oddCount2 > 0){
        return "YES";
    }
    
    return "NO";
}