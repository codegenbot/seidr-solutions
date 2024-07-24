#include <string>
#include <vector>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0 || i == 2) return false;
    }
    return true;
}

std::string intersection(std::vector<int> interval1, std::vector<int> interval2) {
    int start = std::max(interval1[0], interval2[0]);
    int end = std::min(interval1[1], interval2[1]);

    if (start > end) return "NO";

    bool isPrimeResult = true;
    for (int i = 2; i * i <= end - start + 1 && isPrimeResult; ++i) {
        if ((end - start + 1) % i == 0 || (start + 1) % i == 0) isPrimeResult = false;
    }

    return isPrimeResult ? "YES" : "NO";
}

int main() {
    assert(intersection({-2, -2}, {-3, -2}) == "NO");
    // ... 
}