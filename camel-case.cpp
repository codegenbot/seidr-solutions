int main() {
    string input, output = "";
    getline(cin, input);
    
    bool capitalize = false;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '-') {
            capitalize = true;
        } else if (input[i] == ' ') {
            capitalize = false;
            output += ' ';
        } else {
            if (capitalize && islower(input[i])) {
                output += toupper(input[i]);
            } else {
                output += input[i];
            }
            capitalize = false;
        }
    }
    
    cout << output << endl;
    
    return 0;
}