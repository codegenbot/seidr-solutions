vector<string> by_length(vector<int> arr) {
    vector<int> toSort;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            toSort.push_back(i);
    }
    sort(toSort.begin(), toSort.end());
    reverse(toSort.begin(), toSort.end());
    vector<string> result;
    for (int i : toSort) {
        string numName = "";
        switch (i) {
            case 1: numName = "One"; break;
            case 2: numName = "Two"; break;
            case 3: numName = "Three"; break;
            case 4: numName = "Four"; break;
            case 5: numName = "Five"; break;
            case 6: numName = "Six"; break;
            case 7: numName = "Seven"; break;
            case 8: numName = "Eight"; break;
            case 9: numName = "Nine"; break;
        }
        result.push_back(numName);
    }
    return result;
}