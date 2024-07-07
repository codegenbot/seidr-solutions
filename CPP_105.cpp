vector<string> by_length(vector<int> arr) {
    vector<int> temp;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            temp.push_back(i);
        }
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    vector<string> result;
    for (int i : temp) {
        result.push_back(to_string(i) == "1" ? "One"
                         : to_string(i) == "2" ? "Two"
                         : to_string(i) == "3" ? "Three"
                         : to_string(i) == "4" ? "Four"
                         : to_string(i) == "5" ? "Five"
                         : to_string(i) == "6" ? "Six"
                         : to_string(i) == "7" ? "Seven"
                         : to_string(i) == "8" ? "Eight"
                         : "Nine");
    }
    return result;
}