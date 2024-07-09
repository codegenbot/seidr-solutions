int testMedian() {
    vector<float> numbers;
    cout << "Enter the numbers (enter 'stop' to finish): ";
    string input;
    while (true) {
        cin >> input;
        if (input == "stop") break;
        try {
            float num = stof(input);
            numbers.push_back(num);
        } catch(const std::invalid_argument& e) {
            cout << "Invalid number. Please enter a valid floating point number." << endl;
            while (!(cin >> input)) {  
                cout << "Invalid input. Please try again: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }
    float result = median(numbers);
    cout << "The median of the given numbers is: " << result << endl;
    return 0;
}