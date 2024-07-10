#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b);
vector<float> sort_even(vector<float> l);

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<float> vec(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> vec[i];
    }

    std::vector<float> result = sort_even(vec);

    std::cout << "Sorted even elements are: ";
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            std::cout << result[i] << " ";
        }
    }
    return 0;
}

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size();
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> temp;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    temp.push_back(l[j]);
                }
            }
            sort(temp.begin(), temp.end());
            result[i] = temp[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}