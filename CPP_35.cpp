#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void readInput(vector<int>& input) {
    cout << "Enter the number of elements: ";
    unsigned long n;
    cin >> n;

    input.resize(n);

    for(int i = 0; i < n; i++) {
        int temp;
        cout << "Enter element " << (i+1) << ": ";
        cin >> temp;
        input[i] = temp;
    }
}

int contestMain() { 
    vector<int> input;
    readInput(input);

    if(input.size() == 0) {
        cout << "No elements entered. Please try again." << endl;
    } else {
        auto maxElement = *std::max_element(input.begin(), input.end()); 
        cout << "Maximum element is: " << maxElement << endl;

        assert(abs(maxElement - 124) < 1e-4);
    }

    return 0;
}