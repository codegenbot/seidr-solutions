int solution(vector<int> numbers) {
    int sum = 0;
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] % 2 != 0) {
            sum += numbers[i];
        }
    }
    return sum;