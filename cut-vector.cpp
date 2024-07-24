int main() {
    vector<int> vec;
    int num;
    
    while (cin >> num) {
        vec.push_back(num);
    }
    
    int n = vec.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += vec[i];
    }
    
    int half_sum = sum / 2;
    int prefix_sum = 0;
    int cut_index = -1;
    
    for (int i = 0; i < n; i++) {
        prefix_sum += vec[i];
        if (prefix_sum >= half_sum) {
            cut_index = i;
            break;
        }
    }
    
    vector<int> subvec1(vec.begin(), vec.begin() + cut_index + 1);
    vector<int> subvec2(vec.begin() + cut_index + 1, vec.end());
    
    for (int i = 0; i < subvec1.size(); i++) {
        cout << subvec1[i] << endl;
    }
    
    for (int i = 0; i < subvec2.size(); i++) {
        cout << subvec2[i] << endl;
    }
    
    return 0;
}