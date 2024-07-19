vector<int> pluck(vector<int> arr){
    vector<int> result;
    int minEven = -1;
    int minEvenIndex = -1;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] % 2 == 0 && (minEven == -1 || arr[i] < minEven || (arr[i] == minEven && i < minEvenIndex))){
            minEven = arr[i];
            minEvenIndex = i;
        }
    }
    if(minEven != -1){
        result.push_back(minEven);
        result.push_back(minEvenIndex);
    }
    return result;
}