float a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;
    if (!any_int(a, b, c)) {
        std::cerr << "No integers are the sum of two others.\n";
    }
    return 0;
}

bool any_int(float a, float b, float c) {
    int ai = a, bi = b, ci = c;
    return (ai == bi + ci) || (bi == ai + ci) || (ci == ai + bi);
}