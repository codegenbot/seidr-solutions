Here is the completed code:

```cpp
vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    vector<string> result;
    if (lst1.size() <= lst2.size()) {
        for (int i = 0; i < lst1.size(); i++) {
            if (lst1[i].size() + lst2[i].size() < lst2.size() - i) {
                result.push_back(lst2[i]);
            } else {
                result.push_back(lst1[i]);
            }
        }
    } else {
        for (int i = 0; i < lst2.size(); i++) {
            if (lst1[i].size() + lst2[i].size() < lst1.size() - i) {
                result.push_back(lst1[i]);
            } else {
                result.push_back(lst2[i]);
            }
        }
    }
    return result;
}