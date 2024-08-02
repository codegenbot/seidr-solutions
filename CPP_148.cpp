#include <iostream>
#include <vector>
#include <string>
#include <cassert>

// Define the issame function to check if two vectors of strings are the same
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

// Update main to include the necessary includes and call the bf function
int main() {
    assert(issame(bf("Jupiter", "Makemake"), {})); // Ensure this is how you are calling bf
    return 0;
}