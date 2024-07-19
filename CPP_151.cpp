```cpp
int main_cpp151() {
    vector<float> lst;
    cout << "Enter numbers (enter 'stop' to finish): ";
    while (true) {
        float num; 
        cin >> num; 
        if (!cin) break;
        lst.push_back(num);
    }
    long long result = doubleTheDifference(lst);
    cout << "Double the difference: " << result << endl;
    return 0;
}