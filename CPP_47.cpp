int testMedian() {
    vector<float> numbers;
    cout << "Enter the numbers (enter 'stop' to finish): ";
    while (true) {
        float num;
        cin >> num;
        if (cin.fail()) {
            cin.clear();
            char c;
            cin >> c;
            if (c == 's') {
                break;
            } else {
                cout << "Invalid number. Please enter a valid floating point number." << endl;
                continue;
            }
        }
        numbers.push_back(num);
    }
    float result = median(numbers);
    cout << "The median of the given numbers is: " << result << endl;
    return 0;
}