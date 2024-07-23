```cpp
vector<string> by_length(vector<int> arr) {
    vector<string> result;
    for (int i : arr) {
        string s = to_string(i);
        if (i >= 1 && i <= 9)
            result.push_back((i == 1) ? "One" : ((i == 2) ? "Two" : ((i == 3) ? "Three" : ((i == 4) ? "Four" : ((i == 5) ? "Five" : ((i == 6) ? "Six" : ((i == 7) ? "Seven" : ((i == 8) ? "Eight" : "Nine"))))))));
    }
    
    return result;
}