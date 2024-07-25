sort(nums.begin(), nums.end(), [](int a, int b) {
    int sumA = 0, sumB = 0;
    int numA = abs(a), numB = abs(b);
    
    while (numA > 0) {
        sumA += numA % 10;
        numA /= 10;
    }
    
    while (numB > 0) {
        sumB += numB % 10;
        numB /= 10;
    }
    
    if (sumA == sumB) {
        return a < b;
    }
    
    return sumA < sumB;
});

return nums;