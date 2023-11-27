vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    
    sort(lst.begin(), lst.end()); // sort the input vector in ascending order
    
    int start = 0;
    int end = lst.size() - 1;
    bool isMinTurn = true;
    
    while (start <= end){
        if (isMinTurn){
            result.push_back(lst[start]); // add minimum value to the result vector
            start++;
        }
        else{
            result.push_back(lst[end]); // add maximum value to the result vector
            end--;
        }
        
        isMinTurn = !isMinTurn; // switch turn between minimum and maximum
    }
    
    return result;
}