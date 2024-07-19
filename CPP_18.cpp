#include <iostream>
#include <string>

std::string s; 
std::string sub;

int how_many_times(int, int); // Declare the function

int main() {
    std::cin >> s >> sub;
    
    s = sub; // Initialize string 's' with string 'sub'
    
    for(int i = 0; i < sub.size(); i++) {
        s += sub[i];
    }
}

// Define the function below main
int how_many_times(int a, int b) {
    return 0;
}