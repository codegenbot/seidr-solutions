```cpp
vector<int> leaders(vector<int>& arr) {
    vector<int> result = {arr.back()}; 
    for (int i = arr.size()-2; i >= 0; i--) {
        if (arr[i] >= result.back()) { 
            result.push_back(arr[i]);
        }
    }
    return result;
}