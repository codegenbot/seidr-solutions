#include <string>
#include <vector>
#include <numeric> // Include numeric header for std::accumulate

std::string concatenate(const std::vector<std::string>& strings){
    return std::accumulate(strings.begin(), strings.end(), std::string());
}