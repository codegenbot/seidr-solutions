#include <string>

vector<string> by_length(vector<int> arr) {
    vector<string> result;

    // Create a map of numbers and their corresponding names
    map<int, string> numName = {{1, "One"}, {2, "Two"}, {3, "Three"}, 
                                 {4, "Four"}, {5, "Five"}, {6, "Six"}, 
                                 {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    // Create a copy of the input vector and sort it
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    // Reverse the sorted array
    reverse(sortedArr.begin(), sortedArr.end());

    // Iterate over the reversed sorted array
    for (int num : sortedArr) {
        if (num >= 1 && num <= 9) { // Check if the number is between 1 and 9 inclusive
            result.push_back(numName[num]); // Add the corresponding name to the result vector
        }
    }

    return result;
}