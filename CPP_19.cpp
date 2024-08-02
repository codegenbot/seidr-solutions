string sort_numbers(string numbers) {
    map<string, int> number_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, 
                                   {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, 
                                   {"eight", 8}, {"nine", 9}};
    vector<string> num_list;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        while (i + 1 <= numbers.length() && !isalpha(numbers[i])) {
            i++;
        }
        if (!number_map.count(temp = string(i - i + 1))) {
            break;
        }
        num_list.push_back(temp);
        i--;
    }

    sort(num_list.begin(), num_list.end());

    string result = "";
    for (string s : num_list) {
        result += s + " ";
    }
    return result;
}