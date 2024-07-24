{
    double base, height;
    std::cout << "Enter the base and height of the triangle: ";
    std::cin >> base >> height;
    
    double area = triangle_area(base, height);
    std::cout << "The area of the triangle is: " << area << std::endl;

    return 0;
}