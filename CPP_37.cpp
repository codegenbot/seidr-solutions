#include <vector>
#include <algorithm>
#include <iostream>

bool issame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            std::vector<float> evenVals;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    evenVals.push_back(l[j]);
                }
            }
            sort(evenVals.begin(), evenVals.end());
            result[i] = evenVals[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    std::vector<float> input;
    
    for(int i=0; i<5; i++){
        float x;
        std::cin >> x;
        input.push_back(x);
    }

    std::vector<float> output = sort_even(input);

    if(issame(input, output)) {
        std::cout << "The sorted even elements are identical." << std::endl;
    } else {
        std::cout << "Sorted even elements: ";
        for(auto e : output) {
            std::cout << e << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}