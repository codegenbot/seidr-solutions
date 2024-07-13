int main() {
    double starting_height, bounce_height;
    int num_bounces;
    cin >> starting_height >> bounce_height >> num_bounces;

    double bounciness_index = bounce_height / starting_height;
    double total_distance = starting_height + bounce_height;

    for (int i = 1; i < num_bounces; ++i) {
        total_distance += bounce_height * pow(bounciness_index, i+1);
    }

    cout << total_distance << endl;

    return 0;
}