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

    // Split the input string into individual numbers
    vector<string> number_list;
    stringstream ss(numbers);
    string num;
    while (getline(ss, num, ' ')) {
        number_list.push_back(num);
    }

    // Sort the numbers using the number_map
    sort(number_list.begin(), number_list.end(), [&](const string& a, const string& b) {
        return number_map[a] < number_map[b];
    });

    // Join the sorted numbers into a string
    string result;
    for (const string& number : number_list) {
        result += number + " ";
    }
    result.pop_back(); // Remove the extra space at the end

    return result;
}