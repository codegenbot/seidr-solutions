string sort_numbers(string numbers){
    map<string, int> numMap;
    numMap["zero"] = 0;
    numMap["one"] = 1;
    numMap["two"] = 2;
    numMap["three"] = 3;
    numMap["four"] = 4;
    numMap["five"] = 5;
    numMap["six"] = 6;
    numMap["seven"] = 7;
    numMap["eight"] = 8;
    numMap["nine"] = 9;

    string result = "";
    string currentNum = "";
    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            result += currentNum + " ";
            currentNum = "";
        } else {
            currentNum += numbers[i];
        }
    }
    result += currentNum;

    for (int i = 0; i < result.length(); i += 2) {
        for (int j = i + 2; j < result.length(); j += 2) {
            if (numMap[result[i]] > numMap[result[j]]) {
                swap(result[i], result[j]);
            }
        }
    }

    return result;
}