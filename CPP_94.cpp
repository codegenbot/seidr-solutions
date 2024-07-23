int main(){
    std::vector<int> lst;
    int n;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        lst.push_back(num);
    }
    cout << "The sum of digits of the maximum prime number is: " << skjkasdkd(lst) << endl;
    return 0;
}