vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0, right = lst.size() - 1;
    bool isLeftTurn = true;
    
    while (left <= right) {
        if (isLeftTurn) {
            result.push_back(lst[left]);
            left++;
        } else {
            result.push_back(lst[right]);
            right--;
        }
        isLeftTurn = !isLeftTurn;
    }
    
    return result;
}