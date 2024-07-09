vector<string> by_length(vector<int> arr) {
    vector<string> result;

    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sort({num});
            reverse({num.begin(), num.end()});
            string str = to_string(num[0]);
            if (!result.empty()) {
                while (stoll(str) != num[0]) {
                    for (char c : str) {
                        if (c < '9') {
                            str++;
                        } else {
                            str--;
                            break;
                        }
                    }
                }
            }
            result.push_back(("Zero" + str).substr(1));
        }
    }

    return result;
}