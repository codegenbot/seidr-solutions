#include <vector> // Add this to include the vector header

// Declare the is_same function before main
bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(generate_integers(17, 89), std::vector<int>{})); // Provide proper arguments for issame function call
    return 0;
}