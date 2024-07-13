int main() {
    vector<int> nums;
    int num;
    cout << "Enter positive integers to form a vector (enter -1 to stop): ";
    while (true) {
        cin >> num;
        if (num == -1) {
            break;
        }
        nums.push_back(num);
    }

    if (nums.empty()) {
        cout << "No input provided. Exiting program." << endl;
    } else {
        findCutIndex(nums);
    }
    
    return 0;
}