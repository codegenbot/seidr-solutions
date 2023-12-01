string exchange(vector<int> lst1,vector<int> lst2){
    int count = 0; // initialize a counter variable
    
    // iterate over each element in lst1
    for(int i=0; i<lst1.size(); i++){
        // check if the element is odd
        if(lst1[i] % 2 != 0){
            count++; // increment the counter
            
            // check if there are any even elements in lst2
            for(int j=0; j<lst2.size(); j++){
                if(lst2[j] % 2 == 0){
                    count--; // decrement the counter
                    break;
                }
            }
        }
    }
    
    // check if all the elements in lst1 are even
    if(count == 0){
        return "YES";
    }else{
        return "NO";
    }
}