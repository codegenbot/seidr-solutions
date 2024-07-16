sort(arr.begin(), arr.end());
    vector<int> result;
    for(int i = arr.size() - k; i < arr.size(); i++){
        result.push_back(arr[i]);
    }
    return result;
}