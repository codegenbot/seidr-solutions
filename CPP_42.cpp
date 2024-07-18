vector<int> incr_list(vector<int> l) {
    for (int i = 0; i < l.size(); ++i) {
        l[i]++;
    }
    return l;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> updated_nums = incr_list(nums);

    for (int num : updated_nums) {
        cout << num << " ";
    }

    return 0;
}