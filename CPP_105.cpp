bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<bool> by_length(vector<int> arr) {
    vector<int> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(num);
        }
    }

    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());

    vector<string> result;
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
        result.push_back(name);
    }

    vector<bool> resultBool;
    for (string str : result) {
        bool same = false;
        for (int i = 0; i < arr.size(); i++) {
            if (issame(vector<string>(1, str), vector<string>(1, get_name(arr[i], str))) ) {
                same = true;
                break;
            }
        }
        resultBool.push_back(same);
    }

    return resultBool;
}

string get_name(int num, string target) {
    if (num == 1 && target == "One") {
        return "One";
    } else if (num == 2 && target == "Two") {
        return "Two";
    } else if (num == 3 && target == "Three") {
        return "Three";
    } else if (num == 4 && target == "Four") {
        return "Four";
    } else if (num == 5 && target == "Five") {
        return "Five";
    } else if (num == 6 && target == "Six") {
        return "Six";
    } else if (num == 7 && target == "Seven") {
        return "Seven";
    } else if (num == 8 && target == "Eight") {
        return "Eight";
    } else if (num == 9 && target == "Nine") {
        return "Nine";
    }
    return "";
}