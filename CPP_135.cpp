int largest_index = -1;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] < arr[i-1]){
            largest_index = i-1;
        }
    }
    return largest_index;
}