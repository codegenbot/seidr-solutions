bool move_one_ball(vector<int> arr) {
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] < arr[i-1]) return false;
    }
    return true;
}