#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> minPath(std::vector<std::vector<int>> input, int target) {
    std::vector<int> path;
    for (int i = 0; i < target; i++) {
        if (i >= input[1].size()) {
            path.push_back(input[1][0]);
        } else {
            for (int j = 0; j < input.size(); j++) {
                if (i >= input[j][0]) {
                    path.push_back(input[j][0]);
                    i -= input[j][0];
                }
            }
            break;
        }
    }
    return path;
}

int main() {
    std::vector<std::vector<int>> input;
    input.push_back({1, 3});
    input.push_back({3, 2});
    int target = 10;

    if (minPath(input, target).empty()) {
        std::cout << "No paths found with length " << target << "." << std::endl;
        return 0; 
    }
    
    for (int i : minPath(input, target)) {
        std::vector<int> output;
        while(i > 0) {
            if(i >= input[1].size()) {
                i -= input[1][0];
                output.push_back(input[1][0]);
            } else {
                int j = 0;
                while(j < input.size() && i >= input[j][0]) {
                    i -= input[j][0];
                    output.push_back(input[j][0]);
                    j++;
                }
                break;
            }
        }
        bool same = issame(output, {1, 3, 1, 3, 1, 3, 1, 3, 1, 3});
        if(same) {
            std::cout << "The minimum path is: ";
            for (int i : output) {
                std::cout << i << " ";
            }
            std::cout << std::endl;
        } else {
            std::cout << "No paths found with length " << target << "." << std::endl;
        }
    }
}