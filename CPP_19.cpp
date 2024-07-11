map<string, int> number_map = {
    {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
    {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
    {"eight", 8}, {"nine", 9}
};

string sort_numbers(string numbers) {
    vector<string> num_vec;
    string temp;

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == ' ') {
            num_vec.push_back(temp);
            temp = "";
        } else {
            temp += numbers[i];
        }
    }

    num_vec.push_back(temp);

    sort(num_vec.begin(), num_vec.end());

    string result;
    for (const auto& num : num_vec) {
        for (auto it = number_map.begin(); it != number_map.end(); ++it) {
            if (it->first == num) {
                result += to_string(it->second);
                result += " ";
                break;
            }
        }
    }

    return result.substr(0, result.size() - 1);
}