vector<string> result;
    for (string num : lst) {
        int oddCount = 0;
        for (char digit : num) {
            if ((digit - '0') % 2 != 0) {
                oddCount++;
            }
        }
        result.push_back("the number of odd elements " + to_string(oddCount) + "n the str" + to_string(oddCount) + "ng " + num + " of the " + to_string(oddCount) + "nput.");
    }
    return result;
}