float min_num = *min_element(numbers.begin(), numbers.end());
float max_num = *max_element(numbers.begin(), numbers.end());
vector<float> rescaled_numbers;
for (float num : numbers) {
    rescaled_numbers.push_back((num - min_num) / (max_num - min_num));
}
return rescaled_numbers;
}