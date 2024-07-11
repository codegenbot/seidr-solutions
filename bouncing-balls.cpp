int main() {
    double start_height, bounce_height, bounciness_index;
    int num_bounces;

    cin >> start_height >> bounce_height >> num_bounces;

    bounciness_index = bounce_height / start_height;

    double distance = 0;
    for (int i = 0; i < num_bounces; ++i) {
        distance += start_height + bounce_height;
        bounce_height *= bounciness_index;
    }

    cout << distance << endl;

    return 0;
}