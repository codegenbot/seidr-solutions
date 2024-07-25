int main {
    vector<int> userInput;
    cout << "Enter numbers separated by spaces: ";
    for (string input; cin >> input;) {
        if (input.find(',') != string::npos) {
            break;
        }
        int num = stoi(input);
        userInput.push_back(num);
    }
    
    vector<int> result = pluck(userInput);
    cout << "Smallest even number: " << result[0] << endl;
    cout << "Index of smallest even number: " << result[1] << endl;
}