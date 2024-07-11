#include <string>

int fruit_distribution(std::string s, int n){
    int num_apples = 0, num_oranges = 0;
    sscanf(s.c_str(), "%d apples and %d oranges", &num_apples, &num_oranges);
    return n - num_apples - num_oranges;
}