int main() {
    double starting_height, bounce_height, bounciness_index;
    int num_bounces;
    cin >> starting_height >> bounce_height >> num_bounces;

    bounciness_index = bounce_height / starting_height;
    double total_distance = starting_height * (1 + bounciness_index) * (1 - pow(bounciness_index, num_bounces)) / (1 - bounciness_index);

    cout << total_distance << endl;

    return 0;
}