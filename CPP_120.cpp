vector<int> maximum(vector<int> arr, int k) {
    vector<int> res(k);
    copy(std::make_move_iterator(arr.begin() + (arr.size()-k)), 
         std::make_move_iterator(arr.end()), 
         res.begin());
    sort(res.begin(), res.end());
    return res;
}