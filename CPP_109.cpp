bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int minIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            minIndex = i;
            break;
        }
    }
    
    if (minIndex == -1) {
        return false;
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[(minIndex + i) % n] != i + 1) {
            return false;
        }
    }
    
    return true;
}

int main() {
    vector<int> test1 = {1, 2, 3, 4, 5};
    vector<int> test2 = {5, 1, 2, 3, 4};
    
    bool result1 = move_one_ball(test1);
    bool result2 = move_one_ball(test2);
    
    return 0;
}