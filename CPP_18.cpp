#include <iostream>
#include <string>

int how_many_times(int, int);

std::string s; 
std::string sub;

int main() {
    std::cin >> s >> sub;
    
    int count = 0; // Initialize counter variable
    
    for(int i = 0; i < sub.size(); i++) {
        if(sub[i] == 'j') { // Count the occurrences of character 'j'
            count++;
        }
    }
    
    std::cout << "The number of times 'john' appears in the string is: " << count << std::endl;
}