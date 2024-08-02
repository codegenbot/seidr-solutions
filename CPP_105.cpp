#include <string> // Include the <string> header

bool issame(vector<string> a, vector<string> b){ // Fix function signature
    return a == b; // Update function logic
}

int main(){
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"})); // Correct the function call
    return 0;
}