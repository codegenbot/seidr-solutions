std::deque<int> leaders(const std::deque<int>& arr) {
    int n = arr.size();
    std::deque<int> result;

    for(int i=0; i<n; i++) { 
        if(i == n-1 || arr[i] >= max(arr.begin()+i+1, arr.end())) {
            result.push_front(arr[i]);
        }
    }

    return result;
}