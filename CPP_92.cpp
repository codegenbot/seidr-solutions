float a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;
    if (!any_int(a, b, c)) {
        std::cout << "No integer can be expressed as the sum of two other integers.\n";
    }
    return 0;
}