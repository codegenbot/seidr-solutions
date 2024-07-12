int main() {
    vector<int> vec;
  
    int num;
    while (cin >> num) {
        vec.push_back(num);
    }

    int smallestDiff = INT_MAX;
    int cutIndex = 0;

    for (int i = 0; i < vec.size()-1; i++) {
        int diff = abs(accumulate(vec.begin(), vec.begin()+i+1, 0) - accumulate(vec.begin()+i+1, vec.end(), 0));
        if (diff < smallestDiff) {
            smallestDiff = diff;
            cutIndex = i;
        }
    }

    cout << accumulate(vec.begin(), vec.begin()+cutIndex+1, 0) << endl;
    for (int i = cutIndex+1; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }

    return 0;
}