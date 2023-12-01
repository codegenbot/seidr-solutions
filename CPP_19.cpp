#include <sstream>
#include <algorithm>

string sort_numbers(string numbers) {
    // Create a map to map number names to numbers
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

    // Split the input string into individual number names
    stringstream ss(numbers);
    string number_name;
    vector<string> number_names;
    while (ss >> number_name) {
        number_names.push_back(number_name);
    }

    // Sort the number names based on their corresponding numbers
    sort(number_names.begin(), number_names.end(), [&](const string& a, const string& b) {
        return number_map[a] < number_map[b];
    });

    // Join the sorted number names back into a string
    stringstream sorted_numbers;
    for (const auto& number_name : number_names) {
        sorted_numbers << number_name << " ";
    }

    return sorted_numbers.str().erase(sorted_numbers.str().length() - 1);
}