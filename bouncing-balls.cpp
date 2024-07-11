int main() {
    double h0, hb, b;
    cin >> h0 >> hb >> b;
    double bounciness_index = hb / h0;
    double total_distance = h0 + h0 * (1 + bounciness_index) * (1 - pow(bounciness_index, b)) / (1 - bounciness_index);
    cout << total_distance << endl;
    return 0;
}