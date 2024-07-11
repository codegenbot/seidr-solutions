int solution(vector<int> numbers) {
    int oddSum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] % 2 != 0) {
            oddSum += numbers[i];
        }
    }
    return oddSum;
}