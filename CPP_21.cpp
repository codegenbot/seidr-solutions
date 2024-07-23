float min_num = numbers[0];
    float max_num = numbers[0];
    for (float num : numbers) {
        min_num = min(min_num, num);
        max_num = max(max_num, num);
    }

    vector<float> rescaled_numbers;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled_num);
    }

    return rescaled_numbers;
}