map<string, int> number_mapping = {
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

    string result = "";
    string current_number = "";
    
    for (const char &c : numbers) {
        if (c != ' ') {
            current_number += c;
        } else {
            int value = number_mapping[current_number];
            result += current_number + " ";
            current_number = "";
        }
    }

    int value = number_mapping[current_number];
    result += current_number;

    return result;
}