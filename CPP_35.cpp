int contestMain() { 
    std::vector<int> input;
    readInput(input);

    if(input.size() == 0) {
        std::cout << "No elements entered. Please try again." << std::endl;
    } else {
        int maxElement = *std::max_element(input.begin(), input.end()); 
        std::cout << "Maximum element is: " << maxElement << std::endl;

        assert(std::abs(*std::max_element(input.begin(), input.end()) - 124) < 1e-4);
    }

    return 0;
}