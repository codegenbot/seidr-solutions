int sumOfUniqueEvenElements(vector<int> numbers) {
    int sum = 0;
    map<int, bool> seen;
    for (int num : numbers) {
        if (num % 2 == 0 && !seen[num]) {
            sum += num;
            seen[num] = true;
        }
    }
    return sum;
}