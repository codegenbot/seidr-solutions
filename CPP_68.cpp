vector<int> pluck(vector<int> arr){
    vector<int> result;
    int smallest_even = INT_MAX;

    for(int i=0; i<arr.size(); i++){
        if(arr[i] % 2 == 0 && arr[i] < smallest_even){
            smallest_even = arr[i];
            result = {smallest_even, i};
        }
    }

    return result;
}