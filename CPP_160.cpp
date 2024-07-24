```cpp
int main() {
    string expressions[2];
    string operators[2];

    for (int i = 0; i < 2; i++) {
        cout << "Enter expression " << i + 1 << ": ";
        getline(cin, expressions[i]);
        cout << "Enter operator " << i + 1 << ": ";
        getline(cin, operators[i]);
    }

    if (stoi(operators[1]) == 0) {
        result = pow(stod(expressions[0]), stod(expressions[1]));
    } else {

    }
    return 0;
}