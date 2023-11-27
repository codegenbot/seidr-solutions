vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> digit_map;
    digit_map[1] = "One";
    digit_map[2] = "Two";
    digit_map[3] = "Three";
    digit_map[4] = "Four";
    digit_map[5] = "Five";
    digit_map[6] = "Six";
    digit_map[7] = "Seven";
    digit_map[8] = "Eight";
    digit_map[9] = "Nine";

    vector<int> sorted_arr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sorted_arr.push_back(num);
        }
    }
    sort(sorted_arr.begin(), sorted_arr.end());

    reverse(sorted_arr.begin(), sorted_arr.end());

    for (int num : sorted_arr) {
        result.push_back(digit_map[num]);
    }

    return result;
}