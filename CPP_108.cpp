int main() {
    assert(count_nums({1}) == 1);
    cout << "Count: " << count_nums({-1234, 5678, -9012}) << endl;
    if (count_nums({1})) {
        cerr << "Error: Function returned a non-zero value." << endl;
    }
    return 0;
}