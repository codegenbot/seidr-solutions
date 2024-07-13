int main() {
    double h0, hb, bounciness, total_distance = 0;
    int num_bounces;
    
    cin >> h0 >> hb >> num_bounces;

    bounciness = hb / h0;
    total_distance = h0 + (h0 + hb); 

    for (int i = 2; i <= num_bounces; i++) {
        total_distance += 2 * bounciness * total_distance;
    }

    cout << total_distance << endl;

    return 0;
}