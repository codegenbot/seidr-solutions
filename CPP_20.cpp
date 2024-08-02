#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) 
        return false;
    
    for(int i = 0; i < a.size(); i++) {
        if(abs(a[i] - b[i]) > 1e-9)
            return false;
    }
    
    return true;
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    pair<float, float> closest_pair = make_pair(numbers[0], numbers[1]);
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (abs(numbers[j] - numbers[i]) < abs(closest_pair.second - closest_pair.first)) {
                closest_pair = make_pair(min(numbers[i], numbers[j]), max(numbers[i], numbers[j]));
            }
        }
    }
    return vector<pair<float, float>>{closest_pair};
}

int main() {
    vector<float> num1 = {0.5, 2.3, 4.8, 6.9, 10.2};
    vector<float> num2 = {0.50005, 2.30001, 4.80002, 6.90003, 10.20004};

    if(issame(num1, num2)) {
        cout << "The two arrays are the same." << endl;
    } else {
        cout << "The two arrays are not the same." << endl;
    }

    vector<pair<float, float>> result = find_closest_elements(num1);
    for (const auto& pair : result) {
        cout << "(" << pair.first << ", " << pair.second << ")" << endl;
    }
    
    return 0;
}