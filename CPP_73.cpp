int smallest_change(vector<int> arr) {
    int left = 0, right = arr.size() - 1;
    int changes = 0;

    while (left < right) {
        if (arr[left] != arr[right]) {
            changes++;
            for (int i = 0; i < arr.size(); i++) {
                if (i == left || i == right) continue;
                vector<int> temp = arr;
                temp[i] = arr[left];
                bool isPalindromic = true;
                int j = 0, k = temp.size() - 1;
                while (j < k) {
                    if (temp[j] != temp[k]) {
                        isPalindromic = false;
                        break;
                    }
                    j++;
                    k--;
                }
                if (isPalindromic) return changes + 1;
            }
        }
        left++;
        right--;
    }

    return changes;
}