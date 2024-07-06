
// Returns a vector containing all leaders in the input vector
vector<int> leaders(const vector<int>& v) {
    // Initialize an empty vector to store the leaders
    vector<int> result;
    
    // Iterate through the input vector from right to left
    for (auto i = v.rbegin(); i != v.rend(); ++i) {
        bool isLeader = true;
        
        // Iterate through the elements to the right of the current element
        for (auto j = i + 1; j != v.rend(); ++j) {
            if (*i < *j) {
                // If the current element is less than an element to its right, it is not a leader
                isLeader = false;
                break;
            }
        }
        
        // If the current element is a leader, add it to the output vector
        if (isLeader) result.push_back(*i);
    }
    
    return result;
}