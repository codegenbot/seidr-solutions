#include <algorithm>
#include <vector>

int main() {
    std::vector<float> numbers = {1.1, 2.2, 3.1, 4.1, 5.1};
    if (issame(numbers, find_closest_elements(numbers))) {
        cout << "The closest pair of elements is: ";
        for (float x : find_closest_elements(numbers)) {
            cout << x << " ";
        }
        cout << endl;
    } else {
        cout << "Error: The two vectors are not the same." << endl;
    }
    return 0;
}