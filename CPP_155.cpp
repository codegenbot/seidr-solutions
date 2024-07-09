#include <vector>
#include <iostream>
#include <string>
#include <cmath>

bool issame(vector<int> a, vector<int> b);

vector<int> even_odd_count(int num){
    vector<int> result = {0, 0};
    string numStr = to_string(abs(num));
    for(char c : numStr){
        if((c - '0') % 2 == 0){
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    int num;
    std::cin >> num;

    vector<int> result = even_odd_count(num);

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }

    return 0;
}