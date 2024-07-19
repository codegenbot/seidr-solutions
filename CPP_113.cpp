vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (string s : lst) {
        int count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        string res = "the number of odd elements " + to_string(count) + "\n the string " + s + " of the input.";
        result.push_back(res);
    }
    return result;
}
int main() {
    vector<string> input = {"1234", "56789", "2468"};
    vector<string> output = odd_count(input);
    for (string s : output) {
        cout << s << endl;
    }
    return 0;
}