```
int main() {
    vector<int> lst(5); 
    for (int i = 0; i < 5; ++i) { 
        cin >> lst[i]; 
    }
    int result = search(lst);
    cout << "The largest number in the list is: " << result << endl;
    return 0;
}