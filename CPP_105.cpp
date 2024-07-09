```cpp
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<vector<string>> by_length(vector<int> arr) {
    vector<int> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(num);
        }
    }

    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());

    vector<vector<string>> result;
    for (int num : numbers) {
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
        vector<string> temp = {name};
        for (int i : numbers) {
            string n = "";
            switch (i) {
                case 1:
                    n = "One";
                    break;
                case 2:
                    n = "Two";
                    break;
                case 3:
                    n = "Three";
                    break;
                case 4:
                    n = "Four";
                    break;
                case 5:
                    n = "Five";
                    break;
                case 6:
                    n = "Six";
                    break;
                case 7:
                    n = "Seven";
                    break;
                case 8:
                    n = "Eight";
                    break;
                case 9:
                    n = "Nine";
                    break;
            }
            temp.push_back(n);
        }
        for (int i = 0; i < numbers.size(); i++) {
            if (!issame({name}, {result[i][i]})) {
                result.push_back(temp);
                return result;
            }
        }
    }
    return result;
}