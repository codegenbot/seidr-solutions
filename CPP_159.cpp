#include <iostream>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) 
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) 
            return false;
    }
    return true;
}

vector<int> calculate(vector<int>& need, vector<int>& remaining) {
    int total = 0;
    for (int i = 0; i < need.size(); i++) {
        total += need[i];
    }
    
    int left = total - 1000;
    if (left < 0) {
        left = 0;
    }
    if (left > remaining[1]) {
        left = remaining[1];
    }

    return {total, left};
}

int main() {
    vector<int> need = {200, 400};
    vector<int> remaining = {1000, 800};

    auto result = calculate(need, remaining);
    
    cout << "Total: " << result[0] << endl;
    cout << "Left: " << result[1] << endl;

    return 0;
}