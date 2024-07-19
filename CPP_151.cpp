int main() { 
    vector<float> lst;
    float num;
    cout << "Enter numbers (enter 'stop' to finish): ";
    while (true) {
        cin >> num; 
        if (cin >> num && !cin.fail()) break;
        lst.push_back(num);
    }
    long long result = doubleTheDifference(lst);
    cout << "Double the difference: " << result << endl;
    return 0;
}