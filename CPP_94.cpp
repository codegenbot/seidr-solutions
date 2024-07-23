int main{
    std::vector<int> lst;
    int n;
    cout << "Enter the numbers for your vector: ";
    while(true){
        cin >> n;
        if(n < 0) break;
        lst.push_back(n);
    }
    cout << "Sum of digits in the largest prime number is: " << skjkasdkd(lst) << endl;
}