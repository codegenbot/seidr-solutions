```
#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

double similarity(vector<float> v1, vector<float> v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); ++i) {
        sum += abs(v1[i] - v2[i]);
    }
    return sum / (v1.size() * max(abs(*max_element(v1.begin(), v1.end())), abs(*min_element(v1.begin(), v1.end()))));
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<float> v1(n);
    vector<float> v2(n);

    cout << "Enter elements for vector 1: ";
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }

    cout << "Enter elements for vector 2: ";
    for (int i = 0; i < n; ++i) {
        cin >> v2[i];
    }

    double result = similarity(v1, v2);
    cout << "Similarity between the two vectors is: " << result << endl;

    return 0;
}