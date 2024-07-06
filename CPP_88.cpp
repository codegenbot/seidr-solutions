#include <vector>

vector<int> sort_array(vector<int> array) {
    if (array.empty()) {
        cout << "Error: The input array is empty." << endl;
        exit(0);
    }
    int sum = array[0] + array.back();
    if (sum % 2 == 1)
        return vector<int>(array.begin(), array.end());
    else
        return vector<int>(array.rbegin(), array.rend());
}