#include <algorithm>
#include <vector>
#include <limits>

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

int strange_sort_list() {
    std::vector<int> result;

    // Your current function implementation here...
    // For example:
    int input;
    cin >> input;

    if(input <= 0) {
        cout << "Input should be positive integer." << endl;
        return 0;
    }

    std::vector<int> lst(input);
    for(int i=0; i<input; i++) {
        cin >> lst[i];
    }

    result = strange_sort_vector(lst);

    for(auto x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 1;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) {
        return result;
    }

    sort(lst.begin(), lst.end());
    result.push_back(*min_element(lst.begin(), lst.end()));
    lst.erase(remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());

    while (!lst.empty()) {
        sort(lst.begin(), lst.end());
        result.push_back(*min_element(lst.begin(), lst.end()));
        lst.erase(remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());
    }

    return result;
}

int main() {
    assert(issame(strange_sort_vector({11111}) , {1,2,3,4,5}));
    strange_sort_list();
    return 0;
}