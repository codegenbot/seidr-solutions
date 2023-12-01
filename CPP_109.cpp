bool move_one_ball(vector<int> arr){
    if(arr.empty()){
        return true;
    }
    int minIndex = 0;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }
    int shift = arr.size() - minIndex;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > arr[(i + shift) % arr.size()]){
            return false;
        }
    }
    return true;
}