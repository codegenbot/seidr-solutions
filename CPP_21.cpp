vector<float> rescale_to_unit(vector<float> numbers) {
    float minNum = numbers[0];
    float maxNum = numbers[0];

    // Find the minimum and maximum numbers in the vector
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] < minNum) {
            minNum = numbers[i];
        }
        if (numbers[i] > maxNum) {
            maxNum = numbers[i];
        }
    }

    // Calculate the range
    float range = maxNum - minNum;

    // Apply the linear transformation to each number in the vector
    for (int i = 0; i < numbers.size(); i++) {
        numbers[i] = (numbers[i] - minNum) / range;
    }

    return numbers;
}