int can_arrange(vector<int> arr){
    int maxIndex = -1;
    for(int i=0; i<arr.size(); i++){
        bool isSorted = true;
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i] >= arr[j]){
                isSorted = false;
                break;
            }
        }
        if(isSorted) return i;
    }
    return maxIndex;
}