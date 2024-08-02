bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    std::vector<float> sortedNumbers = numbers; 
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
  
    for (int i = 0; i < sortedNumbers.size() - 1; ++i) {
        if (std::abs(sortedNumbers[i] - sortedNumbers[i+1]) < threshold) {
            return true;
        }
    }
    return false;
}