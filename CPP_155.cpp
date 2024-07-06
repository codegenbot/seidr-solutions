vector<int> even_odd_count(int num) {
    int countEven = 0, countOdd = 0;
    string strNum = to_string(abs(num));
    for (char c : strNum) {
        if (stoi(c) % 2 == 0)
            countEven++;
        else
            countOdd++;
    }
    return {countEven, countOdd};
}