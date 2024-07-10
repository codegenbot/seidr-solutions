vector<string> by_length(vector<int> arr) {
    vector<int> numbers;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            numbers.push_back(i);
        }
    }
    
    sort(numbers.begin(), numbers.end());
    
    reverse(numbers.begin(), numbers.end());
    
    vector<string> result;
    for (int num : numbers) {
        string s = "";
        switch (num) {
            case 1: s = "One"; break;
            case 2: s = "Two"; break;
            case 3: s = "Three"; break;
            case 4: s = "Four"; break;
            case 5: s = "Five"; break;
            case 6: s = "Six"; break;
            case 7: s = "Seven"; break;
            case 8: s = "Eight"; break;
            case 9: s = "Nine"; break;
        }
        result.push_back(s);
    }
    
    return result;
}