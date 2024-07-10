string exchange(vector<int> lst1,vector<int> lst2){
    for(int num : lst1){
        if(num % 2 != 0) return "NO";
        bool found = false;
        for(int num2 : lst2){
            if(num2 == num){
                found = true;
                break;
            }
        }
        if(!found) return "NO";
    }
    return "YES";
}