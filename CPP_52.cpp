```cpp
bool below_threshold(vector<int> numbers, int threshold) {
    for (int num : numbers) {
        if (num >= threshold) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(not(below_threshold({1, 8, 4, 10}, 10)));
    vector<int> numbers;
    int sum = 0;
    cout << "Enter the number of elements in the array: ";
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int x; 
        cout << "Enter element " << (i+1) << ": ";
        cin >> x;
        sum +=x;
        numbers.push_back(x);
    }
    if(below_threshold(numbers, sum/n)){
        cout << "The average is below the threshold." << endl;
    }else{
        cout << "The average is not below the threshold." << endl;
    }
}