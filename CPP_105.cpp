bool issame(vector<string> a, vector<string>b) {
    return a == b;
}

int main() {
    vector<int> input;
    cout << "Enter integers from the array (enter -1 when you're done): ";
    int num;
    while ((cin >> num) && (num != -1)) {
        input.push_back(num);
    }
    vector<string> result = by_length(input);
    if (issame(result, {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"})) {
        cout << "The result is: ";
        for (string str : result) {
            cout << str << " ";
        }
        cout << endl;
    } else {
        cout << "Failed!" << endl;
    }
    return 0;
}