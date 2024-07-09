#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result;
    for (int i : l) {
        if (find(result.begin(), result.end(), i) == result.end())
            result.push_back(i);
    }
    return result;

}

void printUniqueNumbers(vector<int> numbers) {
    vector<int> uniqueNumbers = unique(numbers);
    cout << "Unique numbers: ";
    for (int number : uniqueNumbers) {
        cout << number << " ";
    }
    cout << endl;
}

int main() {
    vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    printUniqueNumbers(input);
    return 0;
}