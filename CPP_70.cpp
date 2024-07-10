```c
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    vector<int> input = {num};
    vector<int> output = strange_sort_list(input);
    cout << "Output: ";
    for (auto i : output) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}