int main() {
    double start, first_bounce, bounciness_index, total_distance = 0;
    int num_bounces;

    cin >> start >> first_bounce >> num_bounces;

    bounciness_index = first_bounce / start;

    total_distance = start + start * (1 + bounciness_index); // total distance after first bounce

    for (int i = 1; i < num_bounces; ++i) {
        total_distance += total_distance * bounciness_index;
    }

    cout << total_distance << endl;

    return 0;
}