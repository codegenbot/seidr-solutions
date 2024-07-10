bool correct_bracketing(string brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
        }
        if (count < 0) {
            return false;
        }
    }
    return count == 0;
}

int main() {
    string input_brackets;
    cin >> input_brackets;
    
    if (correct_bracketing(input_brackets)) {
        cout << "Brackets are correctly balanced." << endl;
    } else {
        cout << "Brackets are not correctly balanced." << endl;
    }
    
    return 0;
}