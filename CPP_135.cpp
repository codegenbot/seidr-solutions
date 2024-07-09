int can_arrange(vector<int> arr){ 
    int count = 0; 
    for(int i=0; i<arr.size(); i++){
        if(i==0 || arr[i-1] <= arr[i])
            continue;
        else
            count++;
    }
    return count+1;