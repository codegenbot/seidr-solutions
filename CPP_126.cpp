int main() {
    bool is_sorted(vector<int> lst){
        for(int i = 1; i < lst.size(); i++){
            if(lst[i] <= lst[i-1]){
                int count = 0;
                for(int j = 0; j < lst.size(); j++){
                    if(lst[j] == lst[i])
                        count++;
                }
                if(count > 1)
                    return false;
            }
        }
        return true;
    };
    
    vector<int> numbers;
    int n, num;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> num;
        numbers.push_back(num);
    }
    
    bool result = is_sorted(numbers);
    
    if(result)
        cout << "The list is sorted";
    else
        cout << "The list is not sorted";
    
    return 0;
}