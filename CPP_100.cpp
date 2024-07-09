#include <vector>
bool issame(std::vector<int> a, std::vector<int> b);

vector<int> make_a_pile(int n) {
    vector<int> result;
    for (int i = 0; ; i++) {
        if ((i + 1) % 2 == 0) {
            if (n % 2 != 0) break;
            result.push_back(n);
            n++;
        } else {
            if (n % 2 == 0) break;
            result.push_back(n);
            n++;
        }
    }
    return result;