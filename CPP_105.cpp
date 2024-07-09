int main() {
    vector<int> input;
    cout << "Enter the numbers: ";
    int num;
    while (cin >> num) {
        if (num >= 1 && num <= 9) {
            input.push_back(num);
        }
        else {
            break;
        }
    }
    vector<string> output = by_length(input);
    
    if (issame({"Nine", "Eight", "Four"}, output)) {
        for (string str : output) {
            cout << str << endl;
        }
    }
    return 0;
}