vector<int> even_odd_palindrome(int n){
    vector<int> result;
    int evenCount = 0;
    int oddCount = 0;
    for (int i = 1; i <= n; i++) {
        string num = to_string(i);
        int left = 0;
        int right = num.length() - 1;
        bool isPalindrome = true;
        while (left < right) {
            if (num[left] != num[right]) {
                isPalindrome = false;
                break;
            }
            left++;
            right--;
        }
        if (isPalindrome) {
            if (i % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
    }
    result.push_back(evenCount);
    result.push_back(oddCount);
    return result;
}