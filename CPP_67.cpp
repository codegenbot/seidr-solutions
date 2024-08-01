#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    int total_apples = 0;
    int total_oranges = 0;
    
    size_t start = 0;
    while (start != string::npos) {
        start = s.find(" apples and ", start);
        if (start == string::npos)
            break;
        
        int end = s.find(" oranges", start);
        if (end == string::npos)
            break;
        
        size_t num_start = s.find_first_of("0123456789", start);
        size_t num_end = s.find_first_not_of("0123456789", num_start);
        total_apples = stoi(s.substr(num_start, num_end - num_start));
        
        start = end + 10;
    }
    
    int remaining_fruits = n;
    remaining_fruits -= total_apples;
    return remaining_fruits;
}