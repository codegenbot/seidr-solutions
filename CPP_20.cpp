sort(numbers.begin(), numbers.end());
float min_diff = numbers[1] - numbers[0];
float n1 = numbers[0], n2 = numbers[1];

for (int i = 1; i < numbers.size() - 1; i++) {
    if (numbers[i + 1] - numbers[i] < min_diff) {
        min_diff = numbers[i + 1] - numbers[i];
        n1 = numbers[i];
        n2 = numbers[i + 1];
    }
}

return {n1, n2};