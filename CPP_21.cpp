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

vector<float> rescaled_numbers;
for (float num : numbers) {
    float rescaled_num = (num - min_num) / (max_num - min_num);
    rescaled_numbers.push_back(rescaled_num);
}

return rescaled_numbers;
}