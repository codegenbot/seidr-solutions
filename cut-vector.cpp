int main() {
    vector<int> vec;
    int n;
    while (cin >> n) {
        vec.push_back(n);
    }
    
    int sum = 0;
    for (int i = 0; i < vec.size(); ++i) {
        sum += vec[i];
    }
    
    int target = sum / 2;
    int currSum = 0;
    int idx = 0;
    for (int i = 0; i < vec.size(); ++i) {
        currSum += vec[i];
        if (currSum >= target) {
            idx = i;
            break;
        }
    }
    
    vector<int> subVec1(vec.begin(), vec.begin() + idx + 1);
    vector<int> subVec2(vec.begin() + idx + 1, vec.end());
    
    for (int i = 0; i < subVec1.size(); ++i) {
        cout << subVec1[i] << endl;
    }
    for (int i = 0; i < subVec2.size(); ++i) {
        cout << subVec2[i] << endl;
    }
    
    return 0;
}