vector<string> by_length(vector<int> arr) {
    vector<int> temp;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            temp.push_back(i);
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    vector<string> result;
    for (int i : temp)
        result.push_back((i == 1 ? "One" : i == 2 ? "Two" : i == 3 ? "Three" : i == 4 ? "Four" : i == 5 ? "Five" : i == 6 ? "Six" : i == 7 ? "Seven" : i == 8 ? "Eight" : "Nine") + "");
    return result;
}