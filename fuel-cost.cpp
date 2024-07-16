int main() {
    int sum = 0;
    std::vector<int> v = {12, 5, 7, 3};
    for (int i : v) {
        double temp = std::floor((double)i / 3.0);
        temp -= 2;
        if (temp < 0) {
            temp = 0;
        }
        sum += temp;
    }
    return sum;