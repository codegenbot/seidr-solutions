using namespace std;

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result = {};
    if (arr.empty()) return result;

    int smallest_even_value = INT_MAX;
    int index = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even_value) {
            smallest_even_value = arr[i];
            index = i;
        }
    }

    result.push_back(smallest_even_value);
    if (!arr.empty()) {
        result.push_back(index);
    } else {
        result.push_back(-1); // Add this line
    }

    return result;