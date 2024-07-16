sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result;
    for(int i=0;i<k;i++){
        result.push_back(arr[i]);
    }
    return result;
}