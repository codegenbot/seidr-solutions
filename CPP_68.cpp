vector<vector<int>> issame(vector<int> v1, vector<int> v2) {
    if (v1.size() != v2.size()) {
        return {{-1}};
    }
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return {{-1}};
        }
    }
    return {{1}};
}

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return result;

    int minEven = INT_MAX;
    int index = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            index = i;
        }
    }

    if (minEven != INT_MAX) {
        result.push_back(minEven);
        result.push_back(index);
    }

    return result;
}

int main() {
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {1, 2, 3};
    vector<vector<int>> sameOrNot = issame(v1, v2);
    if (sameOrNot[0][0] == -1) {
        cout << "The vectors are not the same." << endl;
    } else {
        cout << "The vectors are the same." << endl;
    }
    
    return 0;
}