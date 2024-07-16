int main() {
    double h0, h1, b_index;
    int num_bounces;
    cin >> h0 >> h1 >> num_bounces;
    b_index = h1 / h0;
    double total_distance = h0 * (1 - pow(b_index, num_bounces)) / (1 - b_index);
    cout << fixed << total_distance + h0 << endl;
    return 0;
}