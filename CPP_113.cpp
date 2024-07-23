vector<string> result;
    for (string num : lst) {
        int count = 0;
        for (char digit : num) {
            if ((digit - '0') % 2 != 0) {
                count++;
            }
        }
        string output = "the number of odd elements ";
        string replacement = to_string(count);
        output += replacement + "n the str" + replacement + "ng " + replacement + " of the " + replacement + "nput.";
        result.push_back(output);
    }
    return result;