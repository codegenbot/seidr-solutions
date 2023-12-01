vector<int> strange_sort_vector(vector<int> lst)
{
    sort(lst.begin(), lst.end());
    int left = 0, right = lst.size() - 1;
    vector<int> result;
    
    while (left <= right) {
        result.push_back(lst[left++]);
        if (left <= right)
            result.push_back(lst[right--]);
    }
    
    return result;
}