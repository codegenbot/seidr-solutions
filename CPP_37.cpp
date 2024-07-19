std::vector<float> input;
    float val;
    while(std::cin >> val) {
        input.push_back(val);
    }
    std::vector<float> output = sort_even(input);
    for (float v : output) {
        std::cout << v << " ";
    }
    if (!issame(output, input)) {
        std::cout << "\nTest case failed";
    } else{
        std::cout << "\nTest case passed";
    }
    return 0;
}