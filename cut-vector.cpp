int main() {
    vector<int> vec;
    int n;
    while (cin >> n) {
        vec.push_back(n);
    }
    
    int sum = accumulate(vec.begin(), vec.end(), 0);
    int half_sum = sum / 2;
    
    int curr_sum = 0;
    int idx = 0;
    for (int i = 0; i < vec.size(); i++) {
        curr_sum += vec[i];
        if (curr_sum >= half_sum) {
            idx = i;
            break;
        }
    }
    
    vector<int> subvec1(vec.begin(), vec.begin() + idx + 1);
    vector<int> subvec2(vec.begin() + idx + 1, vec.end());
    
    for (int i = 0; i < subvec1.size(); i++) {
        cout << subvec1[i] << endl;
    }
    for (int i = 0; i < subvec2.size(); i++) {
        cout << subvec2[i] << endl;
    }
    
    return 0;
}