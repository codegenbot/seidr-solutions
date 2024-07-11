vector<string> result;
    for (string str : lst) {
        int odd_count = 0;
        for (char c : str) {
            if (c >= '0' && c <= '9' && (c - '0') % 2 == 1) {
                odd_count++;
            }
        }
        string output = "the number of odd elements " + to_string(odd_count) + "n the str" + to_string(odd_count) + "ng " + str + " of the " + to_string(odd_count) + "nput.";
        result.push_back(output);
    }
    return result;