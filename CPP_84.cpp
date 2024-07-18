int sum = 0;
    int currNum = N;
    while (currNum > 0) {
        sum += currNum % 2;
        currNum /= 2;
    }
    string binary = "";
    while (sum > 0) {
        binary = to_string(sum % 2) + binary;
        sum /= 2;
    }
    return binary.empty() ? "0" : binary;
}