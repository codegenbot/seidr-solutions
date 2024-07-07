int main {
    double a[] = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    std::vector<double> b(a, a + sizeof(a) / sizeof(a[0]));
    assert (has_close_elements(b, 0.5) == false);
}