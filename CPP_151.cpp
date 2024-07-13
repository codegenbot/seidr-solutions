int main() {
    vector<float> lst;
    cout << "Enter a list of numbers (space-separated): ";
    string str;
    cin >> str;
    istringstream iss(str);
    float num;
    while (iss >> num) {
        lst.push_back(num);
    }

    long long odd_sum = double_the_difference(lst);

    return 0;
}