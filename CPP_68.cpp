#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::pair<int, int> pluck(std::vector<int> arr) {
    vector<int> evenValues;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            evenValues.push_back(arr[i]);
        }
    }

    if (evenValues.empty()) {
        return {{0, 0}};
    }

    int minEvenValue = *min_element(evenValues.begin(), evenValues.end());
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == minEvenValue) {
            minIndex = i;
            break;
        }
    }

    return {{minEvenValue, minIndex}};
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}) , std::pair<int,int>{{},{}}));
    return 0;
}