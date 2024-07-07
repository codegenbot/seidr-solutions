```c++
#include <vector>
#include <cmath>
#include <initializer_list>
using namespace std;

bool issame(float a, float b) {
    return abs(a - b) < 0.0001;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            float minVal = l[0];
            for (float val : l) {
                if (!issame(val, minVal)) {
                    minVal = val;
                }
            }
            result[i] = minVal;
        } else {
            int j = i - 1;
            while (j >= 0 && !issame(l[j], result[j])) {
                --j;
            }
            if (j >= 0) {
                result[i] = l[j + 1];
            } else {
                float minVal = l[0];
                for (float val : l) {
                    if (!issame(val, minVal)) {
                        minVal = val;
                    }
                }
                result[i] = minVal;
            }
        }
    }
    return result;
}

int main() {
    int;  
    vector<float> input;
    float num;
    cout << "Enter numbers separated by spaces: ";
    while ((cin >> num) && cin.peek() != '\n') {
        input.push_back(num);
    }
    vector<float> result = sort_even(input);
    return 0;
}