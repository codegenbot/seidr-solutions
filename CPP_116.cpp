Here is the completed code:

vector<int> sort_vector(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        if (count(binary(a).begin(), binary(a).end(), '1') == count(binary(b).begin(), binary(b).end(), '1')) {
            return a < b;
        }
        return count(binary(a).begin(), binary(a).end(), '1') < count(binary(b).begin(), binary(b).end(), '1');
    });
    return arr;
}

string binary(int n) {
    string str = "";
    while (n > 0) {
        str += (n & 1) ? "1" : "0";
        n >>= 1;
    }
    reverse(str.begin(), str.end());
    return str;
}