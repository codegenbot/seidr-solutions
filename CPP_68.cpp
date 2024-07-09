int pluck(int num) {
    if (num % 2 == 0 && num < INT_MAX) {
        return num;
    } else {
        return -1;
    }
}

bool areEqual(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    
    return true;
}

bool issame(const vector<int>& a, const vector<vector<int>>& b) {
    if (a.size() != b.size()) return false;
    
    for (int i = 0; i < a.size(); i++) {
        bool found = false;
        for (const auto& vec : b) {
            if (areEqual(a[i], vec)) {
                found = true;
                break;
            }
        }
        if (!found) return false;
    }
    
    return true;
}

int main() {
    vector<int> arr = {7, 9, 7, 1};
    int num = pluck(7);
    vector<int> vec;
    vec.push_back(num);
    if(num != -1) {
        assert(issame({num}, arr));
    } else {
        assert(issame({}, arr));
    }
    return 0;
}