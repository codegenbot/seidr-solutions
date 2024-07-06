#include <vector>
#include <algorithm>

using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());
    while (!lst.empty()) {
        result.push_back(*lst.begin());
        lst.erase(lst.begin());
        if (!lst.empty())
            sort(lst.begin(), lst.end());
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