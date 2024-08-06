// Change vector<int> to std::vector<int> in function signature and comparison in issame function
bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

// Add 'std::' before 'vector<int>' in issame function and remove 'assert' in main
int main(){
    std::vector<int> expected = {1, 4, 5};
    std::vector<int> result = remove_duplicates({1, 2, 3, 2, 4, 3, 5});
    
    if (issame(result, expected)) {
        std::cout << "Test Passed" << std::endl;
    } else {
        std::cout << "Test Failed" << std::endl;
    }
    
    return 0;
}