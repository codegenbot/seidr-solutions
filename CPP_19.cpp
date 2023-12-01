string sort_numbers(string numbers){
    // Create a map to store the corresponding numerical value of each string
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

    // Convert the space-delimited string of numbers into a vector of strings
    vector<string> number_list;
    stringstream ss(numbers);
    string number;
    while (getline(ss, number, ' ')) {
        number_list.push_back(number);
    }

    // Sort the vector based on the numerical values
    sort(number_list.begin(), number_list.end(), [&](const string& a, const string& b) {
        return number_map[a] < number_map[b];
    });

    // Convert the sorted vector back into a string
    string sorted_numbers;
    for (const auto& num : number_list) {
        sorted_numbers += num + " ";
    }

    // Remove the trailing space from the string
    sorted_numbers.pop_back();

    return sorted_numbers;
}