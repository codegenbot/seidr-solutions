int main() {
    double start_height, bounce_height, total_bounces, bounciness_index, total_distance;

    cin >> start_height >> bounce_height >> total_bounces;

    bounciness_index = bounce_height / start_height;

    total_distance = start_height * (1 + (1 - pow(bounciness_index, total_bounces)) / (1 - bounciness_index));

    cout << total_distance << endl;

    return 0;
}