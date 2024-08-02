int main() {
    vector<int> lst;
    cout << "Enter the numbers (space separated): ";
    int num;
    while (cin >> num) {
        lst.push_back(num);
    }
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int result = skjkasdkd(lst); 
    return 0;
}