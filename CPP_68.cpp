int main() {
    vector<int> arr; // input array
    cout << "Enter numbers (separated by space): ";
    for(int i = 0; i < 3; i++) { 
        int num;
        cin >> num;
        arr.push_back(num);
    }

    vector<pair<int, int>> result = result(arr);
    for (auto p : result) {
        cout << "Number: " << p.first << ", Index: " << p.second << endl;
    }
    return 0;
}