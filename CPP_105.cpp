bool issame(int num1, int num2) {
    if (num1 == num2) {
        return true;
    }
    return false;
}

vector<string> by_length(vector<int> arr) {
    vector<int> nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            nums.push_back(num);
        }
    }

    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());

    vector<string> result;
    int same_count = 0;
    string prev_str = "";
    for (int num : nums) {
        string str = "";
        switch (num) {
            case 1:
                str = "One";
                break;
            case 2:
                str = "Two";
                break;
            case 3:
                str = "Three";
                break;
            case 4:
                str = "Four";
                break;
            case 5:
                str = "Five";
                break;
            case 6:
                str = "Six";
                break;
            case 7:
                str = "Seven";
                break;
            case 8:
                str = "Eight";
                break;
            case 9:
                str = "Nine";
                break;
        }
        if (!issame(num, 0)) {
            same_count++;
            result.push_back(str);
            prev_str = str;
        } else {
            for (int i = 0; i < same_count; i++) {
                result.push_back(prev_str);
            }
            same_count = 1;
            prev_str = str;
        }
    }

    while (same_count > 0) {
        result.push_back(prev_str);
        same_count--;
    }

    return result;
}