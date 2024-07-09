#include <iostream>
#include <boost/conversion.hpp>

int main() {
    int startHeight, firstBounce, numBounces;

    std::cin >> startHeight >> firstBounce >> numBounces;
    
    if (!(std::cin)) {
        return 1;
    }

    double bouncinessIndex = static_cast<double>(firstBounce) / static_cast<double>(startHeight);

    std::cout << boost::lexical_cast<std::string>(bouncinessIndex) << " ";
    for (int i = 1; i <= numBounces; ++i) {
        firstBounce *= 0.5;
        std::cout << boost::lexical_cast<std::string>(static_cast<double>(firstBounce)) + " ";
    }
    return 0;
}