bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<vector<string>> by_length(vector<int> arr) {
    vector<vector<string>> result;

    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            vector<string> numbers;
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
            numbers.push_back(name);
            for (int i = 1; i <= num; i++) {
                if (i >= 1 && i <= 9) {
                    string temp_name = "";
                    switch (i) {
                        case 1:
                            temp_name = "One";
                            break;
                        case 2:
                            temp_name = "Two";
                            break;
                        case 3:
                            temp_name = "Three";
                            break;
                        case 4:
                            temp_name = "Four";
                            break;
                        case 5:
                            temp_name = "Five";
                            break;
                        case 6:
                            temp_name = "Six";
                            break;
                        case 7:
                            temp_name = "Seven";
                            break;
                        case 8:
                            temp_name = "Eight";
                            break;
                        case 9:
                            temp_name = "Nine";
                            break;
                    }
                    numbers.push_back(temp_name);
                }
            }
            sort(numbers.begin(), numbers.end());
            reverse(numbers.begin(), numbers.end());
            result.push_back(numbers);
        }
    }

    return result;
}