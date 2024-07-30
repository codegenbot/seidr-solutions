float mean_absolute_deviation(const vector<float>& numbers) {
    float sum = 0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();

    float deviation = 0;
    for (float num : numbers) {
        deviation += abs(num - mean);
    }

    return deviation / numbers.size();
}

int main() {
    assert(abs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0/5.0) < 1e-4);
    return 0;
}