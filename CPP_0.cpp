int main() {
    double a[] = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    std::vector<double> b;
    for (double num : a) {
        b.push_back(num);
    }
    assert(has_close_elements(b, 0.5) == false);
    return 0;