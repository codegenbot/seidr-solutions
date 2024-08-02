#include <string> // Include string header
#include <cassert> // Include assert header

std::string string_sequence(int n){ // Change string to std::string
    std::string result; // Change string to std::string
    for(int i = 0; i <= n; i++){
        result += std::to_string(i) + " "; // Change to_string to std::to_string
    }
    result.pop_back(); // Remove extra space at the end
    return result;
}

int main(){
    assert (string_sequence(10) == "0 1 2 3 4 5 6 7 8 9 10"); // Add int main() and fix assert statement
    return 0;
}