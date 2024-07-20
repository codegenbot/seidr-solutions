using namespace std;

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    std::sort(lst.begin(), lst.end());
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        result.push_back(lst[left++]);
        if (left <= right) {
            result.push_back(lst[right--]);
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    std::vector<int> input(n);
    for (int i = 0; i < n; ++i) {
        cin >> input[i];
    }

    std::vector<int> output = strange_sort_list(input);
    for (int num : output) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}