int main() {
    std::vector<float> values = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::vector<float> temp_values = values;
    sort_even(temp_values);
    
    std::vector<float> expected_sorted_values = {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10};
    if(issame(temp_values, expected_sorted_values)) {
        std::cout << "Sorting successful." << std::endl;
    } else {
        std::cout << "Sorting failed." << std::endl;
    }
    
    return 0;
}