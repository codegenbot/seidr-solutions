#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <limits>

using namespace std;

double similarity(vector<float> v1, vector<float> v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); ++i) {
        sum += abs(v1[i] - v2[i]);
    }
    return sum / (v1.size() * max(abs(*max_element(v1.begin(), v1.end())), abs(*min_element(v1.begin(), v1.end()))));
}

int main() {
    int numVectors;
    cin >> numVectors;

    vector<vector<float>> vectors(numVectors);

    for(int i = 0; i < numVectors; ++i) {
        int size;
        cin >> size;

        vectors[i].resize(size);
        
        for(int j = 0; j < size; ++j) {
            float val;
            cin >> val;
            vectors[i][j] = val;
        }
    }

    double maxSim = 0.0;
    for (int i = 0; i < numVectors - 1; ++i) {
        for (int j = i + 1; j < numVectors; ++j) {
            double sim = similarity(vectors[i], vectors[j]);
            if (sim > maxSim) {
                maxSim = sim;
            }
        }
    }

    cout << fixed << setprecision(2);
    cout << "Maximum Similarity: " << maxSim << endl;

    return 0;
}