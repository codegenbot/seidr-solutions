#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    // Compare contents of two vectors
    return (a == b);
}

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            switch (i) {
                case 1: result.push_back("One"); break;
                case 2: result.push_back("Two"); break;
                case 3: result.push_back("Three"); break;
                case 4: result.push_back("Four"); break;
                case 5: result.push_back("Five"); break;
                case 6: result.push_back("Six"); break;
                case 7: result.push_back("Seven"); break;
                case 8: result.push_back("Eight"); break;
                case 9: result.push_back("Nine"); break;
            }
        }
    }

    return result;
}