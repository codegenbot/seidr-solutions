#include <vector>
#include <algorithm>

using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> sortedList(lst);
    sort(sortedList.begin(), sortedList.end());
    while (!lst.empty()) {
        result.push_back(*std::min_element(lst.begin(), lst.end()));
        for(auto it = lst.begin(); it != lst.end(); ++it) {
            if (*it == *min_element(lst.begin(), lst.end())) {
                lst.erase(it);
                break;
            }
        }
    }

    return result;
}

int main() {
    vector<int> input;
    int numElements;
    cout << "Enter the number of elements in the list: ";
    cin >> numElements;

    for (int i = 0; i < numElements; i++) {
        int n;
        cout << "Enter element " << i + 1 << ": ";
        cin >> n;
        input.push_back(n);
    }

    vector<int> output = strange_sort_vector(input);

    cout << "The sorted list is: ";
    for (int x : output) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}