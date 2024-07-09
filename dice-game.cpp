#include <cmath>

double probability(int n, int m) {
    double total = (n + m - 1);
    if(m >= n)
        return 0;
    else
        return (m - 1.0) / (total);

}

int main() {
    for(int i = 2; i <= 6; ++i) {
        for(int j = 2; j <= 6; ++j) {
            std::cout << "Probability of Peter rolling strictly higher than Colin with a " << i << "-sided die and a " << j << "-sided die is: " << probability(i, j) << std::endl;
        }
    }
    return 0;
}