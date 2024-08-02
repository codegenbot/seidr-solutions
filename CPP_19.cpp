```cpp
string sort_numbers(string numbers) {
    map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                 {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                 {"eight", 8}, {"nine", 9}};
    vector<string> num_vector;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        } else if (numbers[i] == 'o' && numbers[i + 1] == 'n') {
            temp = "zero";
            i += 4;
        } else if (numbers[i] == 't' && numbers[i + 1] == 'h' &&
                   numbers[i + 2] == 'r' && numbers[i + 3] == 'e') {
            temp = "three";
            i += 5;
        } else if (numbers[i] == 't' && numbers[i + 1] == 'w' &&
                   numbers[i + 2] == 'o') {
            temp = "two";
            i += 3;
        } else if (numbers[i] == 'f' && numbers[i + 1] == 'i' &&
                   numbers[i + 2] == 'v') {
            temp = "five";
            i += 4;
        } else if (numbers[i] == 's' && numbers[i + 1] == 'e' &&
                   numbers[i + 2] == 'n') {
            temp = "seven";
            i += 5;
        } else if (numbers[i] == 'o' && numbers[i + 1] == 'n') {
            temp = "one";
            i += 3;
        } else if (numbers[i] == 'f' && numbers[i + 1] == 'o' &&
                   numbers[i + 2] == 'r') {
            temp = "four";
            i += 4;
        } else if (numbers[i] == 's' && numbers[i + 1] == 'i' &&
                   numbers[i + 2] == 'x') {
            temp = "six";
            i += 3;
        } else if (numbers[i] == 'e' && numbers[i + 1] == 'i' &&
                   numbers[i + 2] == 'g') {
            temp = "eight";
            i += 5;
        } else if (numbers[i] == 'n' && numbers[i + 1] == 'i' &&
                   numbers[i + 2] == 'n') {
            temp = "nine";
            i += 4;
        }

        num_vector.push_back(temp);
    }

    sort(num_vector.begin(), num_vector.end());
    string result = "";
    for (auto& num : num_vector) {
        result += num + " ";
    }
    return result.substr(0, result.length() - 1);
}