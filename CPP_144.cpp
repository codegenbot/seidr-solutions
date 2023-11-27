bool simplify(string x, string n) {
    // Extract the numerators and denominators from the strings
    int x_num = stoi(x.substr(0, x.find('/')));
    int x_denom = stoi(x.substr(x.find('/') + 1));

    int n_num = stoi(n.substr(0, n.find('/')));
    int n_denom = stoi(n.substr(n.find('/') + 1));

    // Calculate the result of x * n
    int result_num = x_num * n_num;
    int result_denom = x_denom * n_denom;

    // Check if the result is a whole number
    return (result_num % result_denom == 0);
}