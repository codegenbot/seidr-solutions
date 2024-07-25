map<string, int> number_map = {
        {"zero", 0},
        {"one", 1},
        {"two", 2},
        {"three", 3},
        {"four", 4},
        {"five", 5},
        {"six", 6},
        {"seven", 7},
        {"eight", 8},
        {"nine", 9}
    };

    vector<pair<string, int>> number_pairs;
    stringstream ss(numbers);
    string token;
    while (ss >> token) {
        number_pairs.push_back({token, number_map[token]});
    }

    sort(number_pairs.begin(), number_pairs.end(), 
         [](const pair<string, int>& a, const pair<string, int>& b) {
             return a.second < b.second;
         });

    string sorted_numbers;
    for (const auto& pair : number_pairs) {
        sorted_numbers += pair.first + " ";
    }

    sorted_numbers.pop_back(); // Remove extra space at the end

    return sorted_numbers;