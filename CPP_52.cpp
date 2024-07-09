int main() {
    int threshold;
    vector<int> numbers(5); 

    if(getNumbers(numbers, threshold)) {
        if(below_threshold(numbers, threshold)) {
            cout << "All numbers are below the threshold." << endl;
        } else {
            cout << "At least one number is not below the threshold." << endl;
        }
    }

    return 0;
}