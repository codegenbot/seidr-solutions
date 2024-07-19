#include <vector>

vector<int> strange_sort_list(vector<int> b){
    sort(b.begin(), b.end());
    vector<int> result;
    int left = 0, right = b.size() - 1;
    while (left <= right) {
        result.push_back(b[left]);
        if (left != right) {
            result.push_back(b[right]);
        }
        left++;
        right--;
    }
    return result;
}

int main() {
    vector<int> input = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    vector<int> output = strange_sort_list(input);
    for (int num : output) {
        cout << num << " ";
    }
    return 0;
}