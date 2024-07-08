#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<int> a,vector<int> b){
    return a==b;
}

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    while (!lst.empty()) {
        result.push_back(*min_element(lst.begin(), lst.end()));
        lst.erase(distance(lst.begin(), min_element(lst.begin(), lst.end())), lst.end());
    }

    return result;
}

int main() {
    vector<int> test = strange_sort_vector({111111});
    for(int i: test) cout << i << " ";
    return 0;
}