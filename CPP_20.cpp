for (size_t i = 0; i < numbers.size() - 1; ++i) {
    if (issame(numbers[i], numbers[i + 1])) {
        closest_pairs.push_back({numbers[i], numbers[i]});
    }
    ++i;
}