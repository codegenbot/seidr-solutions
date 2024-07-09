bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<vector<string>> splitByLength(vector<int> arr) {
    map<int, vector<string>> result;
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
            if (result.count(num)) {
                result[num].push_back(name);
            } else {
                vector<string> temp = {name};
                result[num] = temp;
            }
        }
    }

    map<int, vector<string>> sortedResult = result;
    for (auto& pair : sortedResult) {
        sort(pair.second.begin(), pair.second.end());
    }

    vector<vector<string>> finalResult;
    for (auto& pair : sortedResult) {
        reverse(pair.second.begin(), pair.second.end());
        if (!issame(finalResult, {pair.second})) {
            finalResult.push_back({pair.second});
        }
    }

    return finalResult;
}