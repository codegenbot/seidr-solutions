int main() -> int {
    int num;
    vector<int> numbers;

    cout << "Enter the number of elements: ";
    cin >> num;

    while(num <= 0){
        cout << "Invalid input. Please enter a positive integer.\n";
        cout << "Enter the number of elements: ";
        cin >> num;
    }

    numbers.resize(num); 

    for (int i = 0; i < num; i++) {
        int threshold;
        cout << "Enter element " << i + 1 << ": ";
        cin >> threshold;
        numbers.push_back(threshold);
    }

    bool result = below_threshold(numbers, 5);
    if (result) {
        cout << "At least one number is below the threshold." << endl;
    } else {
        cout << "No numbers are below the threshold." << endl;
    }
    
    return 0;
}