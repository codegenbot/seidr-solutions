int main() {
    vector<int> vec;
    int n;
    cin >> n;
    vec.push_back(n);

    int sum = 0;
    for (int i = 0; i < vec.size(); ++i) {
        sum += vec[i];
    }

    int half_sum = sum / 2;
    int current_sum = 0;
    int cut_point = -1;
    for (int i = 0; i < vec.size(); ++i) {
        current_sum += vec[i];
        if (current_sum == half_sum || abs(current_sum - half_sum) < abs(sum - current_sum - half_sum)) {
            cut_point = i;
            break;
        }
    }

    vector<int> subvec1(vec.begin(), vec.begin() + cut_point + 1);
    vector<int> subvec2(vec.begin() + cut_point + 1, vec.end());

    for (int i = 0; i < subvec1.size(); ++i) {
        cout << subvec1[i] << endl;
    }

    for (int i = 0; i < subvec2.size(); ++i) {
        cout << subvec2[i] << endl;
    }

    return 0;
}