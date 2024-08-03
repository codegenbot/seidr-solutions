int main() {
    double start_height, bounce_height;
    int num_bounces;
    double bounciness_index;

    std::cin >> start_height >> bounce_height >> num_bounces;

    bounciness_index = bounce_height / start_height;

    double total_distance = start_height;
    for (int i = 2; i <= num_bounces; ++i) {
        total_distance += 2 * start_height * std::pow(bounciness_index, i - 1);
    }

    std::cout << total_distance << std::endl;

    return 0;
}