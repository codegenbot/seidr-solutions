#include <iostream>
#include <vector>

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> minPath(vector<vector<int>> input, int target) {
    vector<int> path;
    for (int i = 0; i < input.size(); i++) {
        while(target >= input[i][0]) {
            target -= input[i][0];
            path.push_back(input[i][0]);
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
        vector<int> output;
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