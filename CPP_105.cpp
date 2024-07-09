Here's the modified code:

```cpp
bool issame(vector<string> a) {
    vector<int> b = {1,2,3};
    vector<string> c = by_length(b);
    for(int i=0; i<a.size(); i++) {
        if(a[i] != c[i])
            return false;
    }
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    map<int, string> numberNames = {{1, "One"}, {2, "Two"}, {3, "Three"}, 
                                     {4, "Four"}, {5, "Five"}, {6, "Six"}, 
                                     {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    vector<string> sortedNames;
    
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sortedNames.push_back(numberNames[num]);
        }
    }
    
    sort(sortedNames.begin(), sortedNames.end());
    
    reverse(sortedNames.begin(), sortedNames.end());
    
    result = sortedNames;
    
    return result;
}