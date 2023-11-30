vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    vector<int> result;

    while (num != 0) {
        int digit = abs(num % 10);
        if (digit % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        num /= 10;
    }

    result.push_back(evenCount);
    result.push_back(oddCount);
    return result;
}