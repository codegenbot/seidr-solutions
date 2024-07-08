vector<int> getLeaders(const vector<int>& input) {
    // Initialize max to the first element of the input array
    int max = input[0];
    vector<int> output;

    // Loop through the rest of the elements in the input array
    for (size_t i = 1; i < input.size(); i++) {
        if (input[i] >= max) {
            // Update max to the current element and add it to the output vector
            max = input[i];
            output.push_back(max);
        }
    }

    return output;
}