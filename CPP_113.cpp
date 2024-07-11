vector<string> res;
    for (auto& s : lst) {
        int odd_count = 0;
        for (char c : s) {
            if ((c - '0') % 2 == 1) {
                odd_count++;
            }
        }
        string msg = "the number of odd elements " + to_string(odd_count) + "n the str" + to_string(odd_count) + "ng " + s + " of the " + to_string(odd_count) + "nput.";
        res.push_back(msg);
    }
    return res;