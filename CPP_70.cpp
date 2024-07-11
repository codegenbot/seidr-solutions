#include <algorithm>
#include <vector>

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
    int num;
    cout << "Enter the number of elements in the list: ";
    cin >> num;
    for(int i=0; i<num; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> num;
        input.push_back(num);
    }
    
    vector<int> output = strange_sort_vector(input);
    cout << "The sorted list is: ";
    for (int i : output) {
        cout << i << " ";
    }
    return 0;
}