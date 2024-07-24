std::vector<float> sortEven(std::vector<float>& vec) {
    std::vector<float> result;
    int index = 0;

    for (int i = 0; i < vec.size(); i++) {
        if (i % 2 == 0) {
            // Find the smallest even number from all elements
            while (index < vec.size()) {
                if (index % 2 == 0) {
                    result.push_back(vec[index]);
                    break;
                }
                index++;
            }
        } else {
            result.push_back(vec[i]);
        }
    }
    return result;
}