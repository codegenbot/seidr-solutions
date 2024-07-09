int main {
    vector<int> lst;
    cout << "Enter numbers separated by space (or Enter to finish):" << endl;
    string line;
    getline(cin, line);
    int num;
    while(getline(cin, line) && line.length() > 0) {
        stringstream ss(line);
        while(ss >> num) {
            lst.push_back(num);
        }
    }
    cout << "Maximum prime number in the list: " << maxPrime(lst) << endl;
    return 0;