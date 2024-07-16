vector<float> sorted_even = l;
    sort(sorted_even.begin(), sorted_even.end(), [](float a, float b) {
        return ((int)a % 2 == 0 && (int)b % 2 == 0) ? a < b : false;
    });
    return sorted_even;
}