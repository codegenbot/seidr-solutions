string sort_numbers(string numbers){
    // Create a map to store the corresponding numerical value for each word
    map<string, int> numberMap;
    numberMap["zero"] = 0;
    numberMap["one"] = 1;
    numberMap["two"] = 2;
    numberMap["three"] = 3;
    numberMap["four"] = 4;
    numberMap["five"] = 5;
    numberMap["six"] = 6;
    numberMap["seven"] = 7;
    numberMap["eight"] = 8;
    numberMap["nine"] = 9;

    // Convert the input string to individual words
    string result = "";
    string word = "";
    for (int i = 0; i <= numbers.size(); i++) {
        if (numbers[i] == ' ' || i == numbers.size()) {
            // Check if the word is valid and add it to the result string
            if (numberMap.find(word) != numberMap.end()) {
                result += word + " ";
            }
            word = "";
        } else {
            word += numbers[i];
        }
    }

    // Sort the numbers in the result string
    for (int i = 0; i < result.size() - 1; i += 2) {
        for (int j = i + 2; j < result.size(); j += 2) {
            if (numberMap[result[i]] > numberMap[result[j]]) {
                swap(result[i], result[j]);
            }
        }
    }

    return result;
}