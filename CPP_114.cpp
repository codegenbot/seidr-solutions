```cpp
long long minSubArraySum(vector<long long> numVec) {
    long long min_sum = LLONG_MAX;
    for (int i = 0; i < numVec.size(); i++) {
        long long sum = 0;
        for (int j = i; j < numVec.size(); j++) {
            sum += numVec[j];
            if (sum < min_sum) {
                min_sum = sum;
            }
        }
    }
    return min_sum;
}