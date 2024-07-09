#include<iomanip>

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            // If index is even, sort the even indices of l
            vector<float> evenIndices;
            for (int j = 0; j < l.size(); ++j) {
                if (j % 2 == 0) {
                    evenIndices.push_back(l[j]);
                }
            }
            sort(evenIndices.begin(), evenIndices.end());
            result[i] = evenIndices[0]; // Assign the smallest value to the current index
        } else {
            // If index is odd, assign the same value as in l
            result[i] = l[i];
        }
    }
    return result;
}