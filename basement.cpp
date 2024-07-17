int firstNegativeIndex(vector<int>& numbers) {
    int sum = 0;
    int index = -1;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        if (sum < 0) {
            index = i;
            break;
        }
    }
    return index;
}