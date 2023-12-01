vector<float> find_closest_elements(vector<float> numbers){
    sort(numbers.begin(), numbers.end()); // Sort the numbers in ascending order
    float minDiff = numbers[1] - numbers[0]; // Initialize the minimum difference with the difference between the first two numbers
    int index1 = 0, index2 = 1; // Initialize the indices of the closest elements
    
    // Iterate through the numbers to find the closest elements
    for(int i = 1; i < numbers.size() - 1; i++){
        float diff = numbers[i+1] - numbers[i]; // Calculate the difference between the current number and the next number
        if(diff < minDiff){
            minDiff = diff; // Update the minimum difference
            index1 = i; // Update the index of the first closest element
            index2 = i+1; // Update the index of the second closest element
        }
    }
    
    vector<float> result; // Create a vector to store the result
    result.push_back(numbers[index1]); // Add the first closest element to the result vector
    result.push_back(numbers[index2]); // Add the second closest element to the result vector
    
    return result; // Return the result vector
}