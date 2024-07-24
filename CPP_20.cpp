int main() {
    std::vector<float> vec1, vec2;
    float num;
    
    // Input for vector 1
    std::cout << "Enter the elements of vector 1 (separated by space): ";
    while(std::cin >> num) {
        vec1.push_back(num);
    }
    
    // Input for vector 2
    std::cout << "\nEnter the elements of vector 2 (separated by space): ";
    while(std::cin >> num) {
        vec2.push_back(num);
    }
    
    if(isSame(vec1, vec2)) {
        std::cout << "The two vectors are same.\n";
    } else {
        std::cout << "The two vectors are not same.\n";
    }
    
    return 0;
}