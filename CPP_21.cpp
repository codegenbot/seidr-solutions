float min_num = numbers[0];
    float max_num = numbers[0];
    for (float num : numbers) {
        if (num < min_num) {
            min_num = num;
        }
        if (num > max_num) {
            max_num = num;
        }
    }

    vector<float> scaled_numbers;
    for (float num : numbers) {
        float scaled_num = (num - min_num) / (max_num - min_num);
        scaled_numbers.push_back(scaled_num);
    }

    return scaled_numbers;
}