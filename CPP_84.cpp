int solve(int n) {
    string binary = "";
    while(n > 0) {
        if(n % 2 == 0)
            binary = "0" + binary;
        else
            binary = "1" + binary;
        n /= 2;
    }
    if (binary.length() == 0) {
        cout << "Error: Input is not a positive integer." << endl;
        return -1;
    }
    return stoi(binary, 0, 2);
}

int solveMain() {
    int expected = solve(963); 
    return 0;
}