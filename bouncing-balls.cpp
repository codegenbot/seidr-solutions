double starting_height, total_distance, bounciness_index;
std::cin >> starting_height >> bounciness_index;

total_distance = starting_height;
total_distance += 2 * total_distance * bounciness_index;