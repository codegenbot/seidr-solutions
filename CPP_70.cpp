int main() {
    int n1, n2;
    
    std::cout << "Enter the size of first vector: ";
    std::cin >> n1;
    
    std::vector<int> a(n1);  
    std::cout << "Enter elements for vector 1: " << std::endl; 
    for(int i = 0; i < n1; i++) {
        int temp; 
        std::cin >> temp;
        a[i] = temp;  
    }
    
    std::cout << "Enter the size of second vector: ";
    std::cin >> n2;

    std::vector<int> b(n2);  
    std::cout << "Enter elements for vector 2: " << std::endl; 
    for(int i = 0; i < n2; i++) {
        int temp; 
        std::cin >> temp;
        b[i] = temp;  
    }
    
    if(issame(a, b)) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }
    return 0;
}