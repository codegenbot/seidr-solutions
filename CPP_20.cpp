sort(numbers.begin(), numbers.end());
float min_diff = numbers[1] - numbers[0];
int idx1 = 0, idx2 = 1;
for (int i = 1; i < numbers.size() - 1; ++i) {
    if (numbers[i + 1] - numbers[i] < min_diff) {
        min_diff = numbers[i + 1] - numbers[i];
        idx1 = i;
        idx2 = i + 1;
    }
}
return {numbers[idx1], numbers[idx2]};