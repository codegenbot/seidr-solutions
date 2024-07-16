std::deque<int> leaders(const std::deque<int>& arr) {
    int n = arr.size();
    std::deque<int> result;

    for(int i=n-1; i>=0; i--) { 
        if(result.empty() || arr[i] >= result.back()) {
            result.push_front(arr[i]);
        }
    }

    return result;
}