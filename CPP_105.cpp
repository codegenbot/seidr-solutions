bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<vector<string>> group_numbers_by_length(vector<int> arr) {
    unordered_map<int, vector<string>> map;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            string name = "";
            switch (num) {
                case 1:
                    name = "One";
                    break;
                case 2:
                    name = "Two";
                    break;
                case 3:
                    name = "Three";
                    break;
                case 4:
                    name = "Four";
                    break;
                case 5:
                    name = "Five";
                    break;
                case 6:
                    name = "Six";
                    break;
                case 7:
                    name = "Seven";
                    break;
                case 8:
                    name = "Eight";
                    break;
                case 9:
                    name = "Nine";
                    break;
            }
            map[num].push_back(name);
        }
    }

    vector<vector<string>> result;
    for (auto p : map) {
        if (!issame(result.back(), p.second)) {
            result.push_back(p.second);
        }
    }

    return result;
}