float min_value = *min_element(numbers.begin(), numbers.end());
    float max_value = *max_element(numbers.begin(), numbers.end());

    for (float &num : numbers) {
        num = (num - min_value) / (max_value - min_value);
    }

    return numbers;
}