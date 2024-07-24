#include <iostream>
#include <vector>
#include <climits>
#include <sstream>

using namespace std;

int main() {
    vector<int> vec;
    string input;
    getline(cin, input);
    istringstream iss(input);
    int num;

    while (iss >> num) {
        vec.push_back(num);
    }

    int n = vec.size();
    int diff = INT_MAX;
    int cutIndex = -1;

    for (int i = 1; i < n; ++i) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; ++j) {
            sum1 += vec[j];
        }
        for (int j = i; j < n; ++j) {
            sum2 += vec[j];
        }

        int currentDiff = std::abs(sum1 - sum2);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }

    for (int i = 0; i < cutIndex; ++i) {
        std::cout << vec[i] << " ";
    }

    std::cout << std::endl;

    for (int i = cutIndex; i < n; ++i) {
        std::cout << vec[i];
        if(i != n - 1) {
            std::cout << " ";
        }
    }

    return 0;
}