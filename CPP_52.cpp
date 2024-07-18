bool below_threshold(const std::vector<int>& l, int t) {
    for(int num : l){
        if(num >= t){
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> numbers = {1, 3, 5, 7};
    int threshold = 10;
    bool result = below_threshold(numbers, threshold);
    return 0;
}