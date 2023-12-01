string sort_numbers(string numbers){
    map<string, int> num_map;
    num_map["zero"] = 0;
    num_map["one"] = 1;
    num_map["two"] = 2;
    num_map["three"] = 3;
    num_map["four"] = 4;
    num_map["five"] = 5;
    num_map["six"] = 6;
    num_map["seven"] = 7;
    num_map["eight"] = 8;
    num_map["nine"] = 9;

    vector<int> sorted_numbers;
    stringstream ss(numbers);
    string number;
    while (ss >> number) {
        sorted_numbers.push_back(num_map[number]);
    }
    sort(sorted_numbers.begin(), sorted_numbers.end());

    string result;
    for (int i = 0; i < sorted_numbers.size(); i++) {
        result += to_string(sorted_numbers[i]);
        if (i < sorted_numbers.size() - 1) {
            result += " ";
        }
    }

    return result;
}