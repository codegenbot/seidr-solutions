Here is the completed code:

int search(vector<int> lst) {
    int max = 0;
    for (int num : lst) {
        if (num > 0 && num >= count(num, lst)) {
            max = num;
        }
    }
    return max == 0 ? -1 : max;
}

int count(int num, vector<int> lst) {
    int cnt = 0;
    for (int n : lst) {
        if (n == num) {
            cnt++;
        }
    }
    return cnt;