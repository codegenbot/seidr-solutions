vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        int oddCount = 0;
        for (char c : lst[i]) {
            if (c >= '0' && c <= '9' && (c - '0') % 2 != 0) {
                oddCount++;
            }
        }
        string res = "the number of odd elements " + to_string(oddCount) + "n the str" + to_string(i+1) + "ng " + to_string(i+1) + " of the " + to_string(i+1) + "nput.";
        result.push_back(res);
    }
    return result;