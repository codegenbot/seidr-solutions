int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && to_string(abs(num)).back() % 2 != 0) {
            bool firstDigitIsOdd = true;
            string str = to_string(abs(num));
            for (char c : str) {
                if (stoi(string(1, c)) % 2 == 0) {
                    firstDigitIsOdd = false;
                    break;
                }
            }
            if (firstDigitIsOdd) {
                count++;
            }
        }
    }
    return count;
}