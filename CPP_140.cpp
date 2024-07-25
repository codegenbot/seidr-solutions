string result = "";
    int count = 0;
    for (char c : text) {
        if (c == ' ') {
            count++;
            if (count > 2) {
                result.pop_back(); // Remove the last space
                result.pop_back(); // Remove the space before last
                result += '-'; // Replace with a single dash
            } else {
                result += '_'; // Replace with underscore
            }
        } else {
            result += c;
            count = 0; // Reset consecutive spaces count
        }
    }
    return result;
}