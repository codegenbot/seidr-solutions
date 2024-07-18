bool issame(vector<int> a, vector<int> b) {
    int sumA = 0, sumB = 0;
    for (int num : a) {
        int tempA = abs(num);
        while (tempA > 0) {
            sumA += tempA % 10;
            tempA /= 10;
        }
    }
    for (int num : b) {
        int tempB = abs(num);
        while (tempB > 0) {
            sumB += tempB % 10;
            tempB /= 10;
        }
    }
    return sumA == sumB;
}

void order_by_points(vector<int>& nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sumA = 0, sumB = 0;
        int tempA = abs(a), tempB = abs(b);
        while (tempA > 0) {
            sumA += tempA % 10;
            tempA /= 10;
        }
        while (tempB > 0) {
            sumB += tempB % 10;
            tempB /= 10;
        }
        if (sumA == sumB) {
            return a < b;
        }
        return sumA < sumB;
    });
}

// Main function without assert statement
int main() {
    vector<int> nums = {123, 456, 789};
    order_by_points(nums);
    return 0;
}