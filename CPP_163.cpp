#include <vector> // Include the necessary header
#include <cassert> // Include for using assert

bool issame(const std::vector<int>& a, const std::vector<int>& b){ // Fix function signature
    return a == b; // Check if two vectors are the same
}

int main(){
    assert(issame(generate_integers(17, 89), {})); // Use 'assert' to check if the function generates the correct output
    return 0;
}