```cpp
int main() {
    int a, b;
    cin >> a >> b;

    string text, target; 
    vector<int> result;

    cout << gcd(a, b) << endl;

    cin >> text >> target; 
    result = indicesOfSubstring(text, target);
    for (int i : result)
        cout << i << " ";
    return 0;
}