int main() {
    double start_height, bounce_height, bounciness_index, total_distance;
    int num_bounces;

    cin >> start_height >> bounce_height >> num_bounces;

    bounciness_index = bounce_height / start_height;
    total_distance = start_height + start_height * (1 + bounciness_index) * (1 + bounciness_index);

    for (int i = 2; i <= num_bounces; i++) {
        bounciness_index *= bounciness_index;
        total_distance += start_height * bounciness_index;
    }

    cout << total_distance << endl;

    return 0;
}