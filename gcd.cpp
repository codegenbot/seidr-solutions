```c++
int main() {
    int a, b;
    if (!(cin >> a >> b)) {
        cout << "Program did not receive expected input" << endl;
        return 1; 
    }
    cout << gcd(a, b) << endl;

    string text, target;
    if (!(cin >> text >> target)) { 
        cout << "Program did not receive expected input" << endl;
        return 1;
    }
    vector<int> result = findIndices(text, target);
    for (int i : result)
        cout << i << " ";
    return 0;
}