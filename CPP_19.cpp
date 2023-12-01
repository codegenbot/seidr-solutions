string sort_numbers(string numbers){
    map<string, int> number_map;
    number_map["zero"] = 0;
    number_map["one"] = 1;
    number_map["two"] = 2;
    number_map["three"] = 3;
    number_map["four"] = 4;
    number_map["five"] = 5;
    number_map["six"] = 6;
    number_map["seven"] = 7;
    number_map["eight"] = 8;
    number_map["nine"] = 9;

    vector<int> sorted_numbers;
    stringstream ss(numbers);
    string number;
    while (ss >> number) {
        sorted_numbers.push_back(number_map[number]);
    }
    sort(sorted_numbers.begin(), sorted_numbers.end());

    string result;
    for (int i = 0; i < sorted_numbers.size(); i++) {
        for (auto it = number_map.begin(); it != number_map.end(); ++it) {
            if (it->second == sorted_numbers[i]) {
                result += it->first + " ";
                break;
            }
        }
    }

    return result;
}