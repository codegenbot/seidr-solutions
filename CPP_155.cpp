#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
    	if (a[i] != b[i]) {
    		return false;
    	}
    }

    return true;
}

int even_odd_count(const std::vector<int>& arr) {
    int count_even = 0, count_odd = 0;

    for (int num : arr) {
        if (num % 2 == 0) {
            count_even++;
        } else {
            count_odd++;
        }
    }

    return abs(count_even - count_odd);
}

int main() {
    // Your main function logic here
    return 0;
}