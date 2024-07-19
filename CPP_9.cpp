bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> rolling_max(vector<int> numbers);

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    vector<int> result = rolling_max(numbers);
    vector<int> expected_result = {1, 2, 3, 4, 5};
    if (issame(result, expected_result)) {
        cout << "Test passed" << endl;
    } else {
        cout << "Test failed" << endl;
    }
    return 0;
}

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int maxNum = INT_MIN;
    for(int num : numbers){
        maxNum = max(maxNum, num);
        result.push_back(maxNum);
    }
    return result;
}