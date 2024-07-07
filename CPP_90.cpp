Here is the completed code:

```cpp
int next_smallest(vector<int> lst) {
    vector<int> v = lst;
    sort(v.begin(), v.end());
    int n = v.size();
    if(n < 2) return -1; // or any other value to represent None
    for(int i=0; i<n-1; i++) {
        if(v[i] != v[n-1]) 
            return v[i];
    }
    return -1; // or any other value to represent None
}