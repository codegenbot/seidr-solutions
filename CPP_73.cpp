int main() {
    int smallest_change(vector<int> arr) {
        int left = 0, right = arr.size() - 1;
        int changes = 0;

        while (left < right) {
            if (arr[left] != arr[right]) {
                changes++;
                break;
            }
            left++;
            right--;
        }

        for (int i = left; i <= right; i++) {
            if (arr[i] != arr[arr.size() - 1 - i]) {
                changes++;
            }
        }

        return changes;
    }
}