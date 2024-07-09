string sort_numbers(string numbers) {
    map<string, int> numMap;
    string result = "";
    
    for (int i = 0; i < 10; i++) {
        switch(i) {
            case 0:
                numMap["zero"] = i;
                break;
            case 1:
                numMap["one"] = i;
                break;
            case 2:
                numMap["two"] = i;
                break;
            case 3:
                numMap["three"] = i;
                break;
            case 4:
                numMap["four"] = i;
                break;
            case 5:
                numMap["five"] = i;
                break;
            case 6:
                numMap["six"] = i;
                break;
            case 7:
                numMap["seven"] = i;
                break;
            case 8:
                numMap["eight"] = i;
                break;
            case 9:
                numMap["nine"] = i;
                break;
        }
    }
    
    for (int i = 0; i < numbers.size(); i++) {
        if (i + 1 < numbers.size()) {
            result += numMap[numbers.substr(i, numbers.find(" ") - i)] + " ";
        } else {
            result += numMap[numbers.substr(i)];
        }
    }
    
    return result;
}