int main(){
    std::vector<int> lst;
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    cout << "Enter the elements of the vector: ";
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        lst.push_back(temp);
    }
    
    cout << "Sum of digits of the maximum prime number in the given list: " << skjkasdkd(lst) << endl;

    return 0;
}