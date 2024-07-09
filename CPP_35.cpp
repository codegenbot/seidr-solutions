```
#include <vector>
#include <cmath>

float max_element(const std::vector<float>& l){
    float max = l[0];
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > max) {
            max = l[i];
        }
    }
    return abs(max);
}

int main() {
    vector<float> input;
    cout << "Enter elements (enter 'q' to finish):" << endl;
    while(true) {
        float num;
        cin >> num;
        if(num == 'q') break;
        input.push_back(num);
    }
    cout << "The maximum element is: " << max_element(input) << endl;
    return 0;
}