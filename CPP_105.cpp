vector<string> by_length(vector<int> arr){
    vector<int> valid_elements;
    for(int num : arr) {
        if (num >= 1 && num <= 9) {
            valid_elements.push_back(num);
        }
    }
    sort(valid_elements.begin(), valid_elements.end());
    reverse(valid_elements.begin(), valid_elements.end());

    vector<string> names = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    vector<string> result;
    for(int num : valid_elements) {
        result.push_back(names[num - 1]);
    }
    
    return result;
}