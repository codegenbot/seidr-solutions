bool move_one_ball(vector<int> arr){
    int n = arr.size();
    if(n == 0){
        return true;
    }
    int minIndex = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }
    int shift = (n - minIndex) % n;
    for(int i = 0; i < n; i++){
        if(arr[(i + shift) % n] < arr[(i + shift - 1 + n) % n]){
            return false;
        }
    }
    return true;
}