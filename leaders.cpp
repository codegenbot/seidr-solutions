std::deque<int> leaders(const std::deque<int>& arr) {
    int n = arr.size();
    std::deque<int> result;

    int maxRight = arr.back();

    for(int i=n-2; i>=0; i--) { 
        if(arr[i] >= maxRight) {
            maxRight = arr[i];
            result.push_front(maxRight);
        }
    }

    return result;
}