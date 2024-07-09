int main() {
    vector<int> arr = {7, 9, 7, 1};
    int num;
    cout << "Enter a number: ";
    cin >> num;
    vector<int> vec;
    if(num % 2 == 0 && num < INT_MAX) {
        vec.push_back(num);
    }
    if(num != -1) {
        assert(issame({num}, arr));
    } else {
        assert(issame({}, arr));
    }
    return 0;
}