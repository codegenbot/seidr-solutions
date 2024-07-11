if (cut_idx == -1) {
    cout << "Cut index not found." << endl;
    return 0;
}

vector<int> subvec1(nums.begin(), nums.begin() + cut_idx + 1);
vector<int> subvec2(nums.begin() + cut_idx + 1, nums.end());

for (int num : subvec1) {
    cout << num << endl;
}
for (int num : subvec2) {
    cout << num << endl;
}