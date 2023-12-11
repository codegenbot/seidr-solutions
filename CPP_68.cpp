```
bool issame(vector<int> arr1, vector<int> arr2) {
    if (arr1.size() != arr2.size()) {
        return false;
    }

    for (int i = 0; i < arr1.size(); i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }

    return true;
}
```