vector<string> by_length(vector<int> arr){
    vector<string> names = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    vector<int> sorted_arr;

    for(int i=0; i<arr.size(); i++){
        if(arr[i] >= 1 && arr[i] <= 9){
            sorted_arr.push_back(arr[i]);
        }
    }

    sort(sorted_arr.begin(), sorted_arr.end());
    reverse(sorted_arr.begin(), sorted_arr.end());

    vector<string> result;
    for(int i=0; i<sorted_arr.size(); i++){
        result.push_back(names[sorted_arr[i]-1]);
    }

    return result;
}