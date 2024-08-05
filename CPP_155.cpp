#include <vector>
#include <string>

vector<int> even_odd_count(int num) {
    vector<int> counts = {0, 0};
    string numStr = to_string(abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

int main() {
    int num = 123456;
    vector<int> result = even_odd_count(num);
    if(std::equal(result.begin(), result.end(), counts.begin(), counts.end(), issame)) {
        // Output the result
    }

    return 0;
}