
    int a, b;
    std::cin >> a;
    std::cin >> b;
    
    std::cout << gcd(a, b) << std::endl;

    std::string text, target;
    std::cin >> text >> target;
    std::vector<int> result = findIndicesOfSubstring(text, target);
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;