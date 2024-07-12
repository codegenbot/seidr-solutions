int mainProblemCPP120() {
    std::vector<int> vec1(3, 0); 
    std::vector<int> vec2 = {1, 2, 3}; 
    
    if (vec1 != vec2) { // Compare vectors
        std::cout << "Vectors are not the same." << std::endl;
    } else {
        std::cout << "Vectors are the same" << std::endl;
    }
    
    int arr[] = {1, 2, 3, -23, 243, -400, 0};
    int n = static_cast<size_t>(sizeof(arr) / sizeof(arr[0])); // Calculate the size of the array
    std::vector<int> vec(arr, arr + n); // Create a vector from the array
    
    return 0;
}