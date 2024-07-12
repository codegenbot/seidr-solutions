int main() {
    double start_height, first_bounce, total_distance = 0.0, bounciness_index;
    int num_bounces;

    cin >> start_height >> first_bounce >> num_bounces;

    bounciness_index = first_bounce / start_height;

    total_distance = start_height + start_height * (1 + bounciness_index);

    for (int i = 2; i <= num_bounces; i++) {
        total_distance += start_height * pow(bounciness_index, i);
    }

    cout << total_distance << endl;

    return 0;
}