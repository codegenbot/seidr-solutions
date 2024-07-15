#include <vector>
#include <string>
using namespace std;

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_count(int num) {
    std::vector<int> result(2, 0);
    std::string numStr = std::to_string(std::abs(num));
    for(char c : numStr) {
        if ((c - '0') % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}

int main() {
    // Test even_odd_count function
    int num = 1234567;
    std::vector<int> count = even_odd_count(num);
    for (int i = 0; i < count.size(); ++i) {
        cout << "Count of " << (i % 2 == 0 ? "even" : "odd") << " digits: " << count[i] << endl;
    }
    return 0;
}