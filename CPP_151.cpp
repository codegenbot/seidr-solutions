main() {
    std::vector<double> lst;
    double input;

    while (true) {
        std::cout << "Enter a number (or -1 to finish): ";
        std::cin >> input;

        if (input == -1.0) break; 

        lst.push_back(input);
    }

    long long sum = 0;
    for (double num : lst) {
        if (num > 0 && int(num + 0.5) == num) { 
            sum += pow(int(num + 0.5), 2); 
        }
    }
    std::cout << "The difference is: " << sum << std::endl;
    return 0;
}