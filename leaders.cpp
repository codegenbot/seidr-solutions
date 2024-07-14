std::deque<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::deque<int> res;
    res.push_back(arr.back());  // rightmost element is always a leader

    for (int i = n - 2; i >= 0; --i) {
        if (arr[i] >= res.back()) { 
            res.push_front(arr[i]);   
        }
    }

    return res;
}