vector<string> by_length(vector<int> arr) {
    vector<int> temp;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            temp.push_back(i);
        }
    }

    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());

    vector<string> result;
    for (int i : temp) {
        if (i >= 1 && i <= 9) {
            string s = to_string(i);
            if (s.length() == 1) {
                result.push_back("One" + s - '0');
            } else {
                result.push_back(to_string(i));
            }
        }
    }

    return result;
}