float a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;
    
    if (!(a || b || c)) {
        std::cout << "Error! At least one number is required." << std::endl;
    } else {
        int ai = a, bi = b, ci = c;
        bool result = (ai == bi + ci) || (bi == ai + ci) || (ci == ai + bi);
        if (result)
            std::cout << "True" << std::endl;
        else
            std::cout << "False" << std::endl;
    }
    
    return 0;
}