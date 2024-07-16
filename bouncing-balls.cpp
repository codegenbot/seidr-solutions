int main() {
    double starting_height, bounce_height;
    int num_bounces;
    cin >> starting_height >> bounce_height >> num_bounces;

    double bounciness_index = bounce_height / starting_height;
    double total_distance = starting_height + (2 * bounce_height * pow(bounciness_index, num_bounces));

    cout << total_distance << endl;

    return 0;
}