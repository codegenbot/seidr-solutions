vector<string> result;
    for (string str : lst) {
        int oddCount = 0;
        for (char c : str) {
            if (c >= '0' && c <= '9' && (c - '0') % 2 == 1) {
                oddCount++;
            }
        }
        result.push_back("the number of odd elements " + to_string(oddCount) + "n the str" + to_string(oddCount) + "ng " + str + " of the " + to_string(oddCount) + "nput.");
    }
    return result;
}