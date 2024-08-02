int main() {
    vector<int> lst;
    cout << "Enter the numbers (space-separated): ";
    for(int i; cin >> i;){
        lst.push_back(i);
    }
    int result = skjkasdkd(lst); 
    cout << "The sum of the digits of the largest prime number is: " << result << endl;
    return 0;
}