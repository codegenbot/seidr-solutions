Here is the completed code:

vector<int> pluck(vector<int> arr) {
    vector<int> result = {};
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) { // Check if the node is even
            if (result.empty()) {
                result = {{arr[i], i}}; // If it's the first even node, store its value and index
            } else {
                if (arr[i] < result[0][0]) {
                    result = {{arr[i], i}}; // If a smaller even value is found, update the result
                } else if (arr[i] == result[0][0] && i < result[0][1]) { 
                    result = {{arr[i], i}}; // If multiple nodes with same smallest even value are found, choose the one with the smallest index
                }
            }
        }
    }
    return result;
}