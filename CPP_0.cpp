int main() {
    vector<float> a({1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f});
    if (has_close_elements(a, 0.1f)) {
        cout << "The vector contains close elements." << endl;
    } else {
        cout << "The vector does not contain close elements." << endl;
    }
    return 0;
}