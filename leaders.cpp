
vector<int> leaders(const vector<int>& input) {
    vector<int> output;
    int currentLeader = INT_MIN;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] >= currentLeader) {
            output.push_back(input[i]);
            currentLeader = input[i];
        }
    }
    return output;
}