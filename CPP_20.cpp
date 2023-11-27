vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end()); // Sort the numbers in ascending order
    float minDiff = INT_MAX; // Initialize minimum difference with maximum possible value
    int index1, index2; // Initialize indices of the closest elements
    for (int i = 1; i < numbers.size(); i++) {
        float diff = abs(numbers[i] - numbers[i - 1]); // Calculate difference between current and previous number
        if (diff < minDiff) { // If current difference is smaller than minimum difference
            minDiff = diff; // Update minimum difference
            index1 = i - 1; // Update index of first closest element
            index2 = i; // Update index of second closest element
        }
    }
    vector<float> closestElements;
    closestElements.push_back(numbers[index1]); // Add first closest element to the vector
    closestElements.push_back(numbers[index2]); // Add second closest element to the vector
    return closestElements;
}