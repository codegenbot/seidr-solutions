Here is the completed code:

int smallest_change(vector<int> arr) {
    int n = arr.size();
    int left = 0, right = n - 1;
    int changes = 0;

    while (left < right) {
        if (arr[left] != arr[right]) {
            changes++;
            for (int i = 0; i < n; i++) {
                if (i == left || i == right) continue;
                bool flag = true;
                for (int j = 0; j < n; j++) {
                    if (j == left || j == right) continue;
                    if (arr[i] != arr[j]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) return changes + 1;
            }
            for (int i = 0; i < n; i++) {
                if (i == left || i == right) continue;
                bool flag = true;
                for (int j = 0; j < n; j++) {
                    if (j == left || j == right) continue;
                    if (arr[i] != arr[j]) {
                        flag = false;
                        break;
                    }
                }
                if (!flag) continue;
                return changes + 1;
            }
        }
        left++;
        right--;
    }
    return changes;
}