#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b);
vector<float> sort_even(vector<float> l);

int main() {
    int n;
    std::cin >> n;
    
    vector<float> vec(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }
    
    vector<float> result = sort_even(vec);
    
    for (float x : result) {
        std::cout << x << " ";
    }
    return 0;
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