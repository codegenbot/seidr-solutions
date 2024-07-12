
bool below_zero(const vector<int>& operations) {
    return accumulate(operations.begin(), operations.end(), 0) < 0;
}