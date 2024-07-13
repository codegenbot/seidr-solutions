Here is the completed code:

int smallest_change(vector<int> arr) {
    int n = arr.size();
    string str = "";
    for (int i : arr) {
        str += to_string(i);
    }
    int count = 0;
    int left = 0, right = n - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            count++;
        } else {
            left++;
            right--;
        }
    }
    return count;
}