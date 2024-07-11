vector<int> findLeaders(const vector<int>& numbers) {
    vector<int> leaders;
    int currentLeader = INT_MIN;
    for (int i = numbers.size() - 1; i >= 0; --i) {
        if (numbers[i] >= currentLeader) {
            currentLeader = numbers[i];
            leaders.push_back(currentLeader);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}