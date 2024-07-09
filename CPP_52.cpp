int main() {
    vector<int> numbers(5); 
    int threshold;
    if(getNumbers(numbers, threshold)) {
        if(below_threshold(numbers, threshold)) {
            cout << "All numbers are below the threshold." << endl;
        } else {
            cout << "At least one number is not below the threshold." << endl;
        }
    }
    return 0;
}