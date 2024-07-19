int mainFunction() {
    double x = 3.01;
    int y, z;
    std::cout << "Enter three numbers: ";
    if (!(std::cin >> x)) { 
        std::cout << "Error: Please enter valid number.\n";
    } else {
        if (x != static_cast<int>(x)) { 
            std::cout << "The numbers are not integers.\n";
        } else {
            std::cout << "The numbers are integers: " << static_cast<int>(x) << ", " << y << ", " << z << "\n";
            if (!(std::cin >> y >> z)) { 
                std::cout << "Error: Please enter three numbers.\n";
            }
        }
    }

    return 0;
}