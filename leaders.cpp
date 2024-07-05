```cpp
vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int rightmost = arr.back();
    
    for(int i = arr.size() - 1; i >= 0; --i) {
        if(i == arr.size() - 1 || arr[i] >= rightmost) {
            rightmost = arr[i];
            result.push_back(rightmost);
        }
    }
    
    return result;
}