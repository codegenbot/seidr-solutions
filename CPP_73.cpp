int smallest_change(vector<int> arr) {
    int n = arr.size();
    string str;
    for (int i : arr) {
        char c = '0' + i;
        str += c;
    }

    int left = 0, right = n - 1;
    int changes = 0;

    while (left < right) {
        if (str[left] != str[right]) {
            int min_char = min(str[left], str[right]) - '0';
            int max_char = max(str[left], str[right]) - '0';

            for (int i = left + 1; i < right; i++) {
                if ((str[i] - '0') >= min_char && (str[i] - '0') <= max_char) {
                    changes++;
                    swap(str[i], str[right]);
                    break;
                }
            }
        }
        left++, right--;
    }

    return changes;
}