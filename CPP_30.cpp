int main() {
    vector<float> input;
    cout << "Enter numbers separated by space: ";
    float num;
    while (cin >> num) {
        input.push_back(num);
    }
    vector<float> positive = get_positive(input);
    if (all_of(positive.begin(), positive.end(), [](float x){ return x > 0; })) {
        cout << "All numbers are positive." << endl;
    } else {
        cout << "Not all numbers are positive." << endl;
    }
    return 0;
}