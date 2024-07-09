int solutionMain() {
    int rounded_avg = std::stoi(calculateBinary(5, 5), nullptr, 2);
    assert(rounded_avg == 10);
    assert(calculateBinary(5, 5) == "101");
    
    return 0;
}