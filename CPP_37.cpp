#include <iostream>
#include <algorithm>
using namespace std;

bool isSame(vector<float> v1, vector<float> v2) {
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i]) return false;
    }
    return true;
}

std::vector<float> sortEven(std::vector<float> l) {
    std::vector<float> result(l.size());
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            auto it = stable_partition(l.begin(), l.end(), [](float x){return x % 2 != 0;});
            result[i] = *min_element(it, l.end());
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() 
{
    std::vector<float> input;
    float num;
    while(cin >> num) {
        input.push_back(num);
    }
    std::vector<float> output = sortEven(input);
    for(float f : output) {
        cout << f << " ";
    }
    return 0;
}