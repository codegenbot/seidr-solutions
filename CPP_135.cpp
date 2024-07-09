int can_arrange(vector<int> arr){
    int last = -1;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] < last + i+1)
            return -1;
        last = i;
    }
    return arr.size();
}
```