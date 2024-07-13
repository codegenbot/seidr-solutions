int main() {
    double start_height, first_bounce_height, bounce_index;
    int num_bounces;
    cin >> start_height >> first_bounce_height >> num_bounces;
    bounce_index = first_bounce_height / start_height;
    double total_distance = start_height + first_bounce_height;
    for (int i = 2; i <= num_bounces; ++i) {
        total_distance += first_bounce_height * pow(bounce_index, i);
    }
    cout << total_distance << endl;
    return 0;
}