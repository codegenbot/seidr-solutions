map<string,int> num_map = {
    {"zero", 0},
    {"one", 1},
    {"two", 2},
    {"three", 3},
    {"four", 4},
    {"five", 5},
    {"six", 6},
    {"seven", 7},
    {"eight", 8},
    {"nine", 9}
};

string sort_numbers(string numbers) {
    vector<string> num_list;
    string temp;

    for(int i = 0; i < numbers.length(); i++) {
        if(i == numbers.length() - 1 || (numbers[i] != ' ' && numbers[i + 1] == ' ')) {
            temp = "";
            int j = i;
            while(j > 0 && numbers[j-1] != ' ') {
                temp = numbers[j-1] + temp;
                j--;
            }
            num_list.push_back(temp);
            i += temp.length();
        }
    }

    sort(num_list.begin(), num_list.end());
    string result = "";
    for(int i = 0; i < num_list.size(); i++) {
        if(result != "") {
            result += " ";
        }
        for(auto &num : num_map) {
            if(num.first == num_list[i]) {
                result += num.first;
                break;
            }
        }
    }

    return result;
}