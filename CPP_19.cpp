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

    // Split the input string into individual numbers
    vector<string> num_vec;
    stringstream ss(numbers);
    string num;
    while (ss >> num) {
        num_vec.push_back(num);
    }

    // Sort the numbers based on their corresponding values in the map
    sort(num_vec.begin(), num_vec.end(), [&](const string& a, const string& b) {
        return num_map[a] < num_map[b];
    });

    // Combine the sorted numbers into a single string
    string sorted_numbers;
    for (const string& num : num_vec) {
        sorted_numbers += num + " ";
    }

    // Remove the trailing space
    sorted_numbers.pop_back();

    return sorted_numbers;
}