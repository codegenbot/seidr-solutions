sort(nums.begin(), nums.end(), [](int a, int b) {
    int sumA = a < 0 ? 9 : 0;
    int sumB = b < 0 ? 9 : 0;
    string strA = to_string(abs(a));
    string strB = to_string(abs(b));
    for(char c : strA) {
        sumA += c - '0';
    }
    for(char c : strB) {
        sumB += c - '0';
    }
    if(sumA != sumB) {
        return sumA < sumB;
    }
    return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
});

return nums;
}