sort(numbers.begin(), numbers.end());
float min_diff = numbers[1] - numbers[0];
int index1 = 0, index2 = 1;
for (int i = 1; i < numbers.size() - 1; ++i) {
    if (numbers[i + 1] - numbers[i] < min_diff) {
        min_diff = numbers[i + 1] - numbers[i];
        index1 = i;
        index2 = i + 1;
    }
}
return {numbers[index1], numbers[index2]};