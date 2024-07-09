int testMedian() {
    vector<float> numbers;
    cout << "Enter the numbers (enter 'stop' to finish): ";
    string input;
    while (true) {
        cin >> input;
        if (input == "stop") break;
        float num;
        try {
            num = stof(input);
            numbers.push_back(num);
        } catch (invalid_argument& e) {
            cout << "Invalid input. Please enter a number." << endl;
        }
    }
    if (!numbers.empty()) {
        float result = median(numbers);
        cout << "The median of the given numbers is: " << result << endl;
    } else {
        cout << "No numbers entered." << endl;
    }
    return 0;
}