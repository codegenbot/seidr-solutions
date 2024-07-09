float min_diff = numeric_limits<float>::max();
for (int i = 0; i < numbers.size(); i++) {
    for (int j = i + 1; j < numbers.size(); j++) {
        float diff = abs(numbers[i] - numbers[j]);
        if (diff < threshold && diff < min_diff) {
            min_diff = diff;
        }
    }
}
return min_diff < threshold;