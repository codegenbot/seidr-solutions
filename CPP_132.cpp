int main() {
    string str;
    cout << "Enter a string of square brackets: ";
    cin >> str;

    bool result = is_nested(str);

    if(result) {
        cout << "The subsequence is nested." << endl;
    } else {
        cout << "The subsequence is not nested." << endl;
    }

    return 0;
}

bool is_nested(string str) {
    int count = 0;

    for (char c : str) {
        if (c == '[') {
            count++;
        } else if (c == ']') {
            if (count > 0) {
                count--;
            } else {
                return false;
            }
        }
    }

    return count > 0;
}