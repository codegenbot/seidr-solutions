int main() {
    vector<int> vec;
    int num;
    while (cin >> num) {
        vec.push_back(num);
    }

    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
    }

    int half_sum = sum / 2;
    int curr_sum = 0;
    int idx = -1;

    for (int i = 0; i < vec.size(); i++) {
        curr_sum += vec[i];
        if (curr_sum >= half_sum) {
            idx = i;
            break;
        }
    }

    if (abs(curr_sum - half_sum) < abs(curr_sum - vec[idx] - half_sum)) {
        idx++;
    }

    for (int i = 0; i <= idx; i++) {
        cout << vec[i] << endl;
    }
    cout << 0 << endl;

    for (int i = idx + 1; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
    cout << 0 << endl;

    return 0;
}