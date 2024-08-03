double starting_height, bounciness_index;
int number_of_bounces;
cin >> starting_height >> bounciness_index >> number_of_bounces;

double total_distance = starting_height;
for (int i = 0; i < number_of_bounces; ++i) {
    total_distance += 2 * total_distance * bounciness_index;
}

cout << total_distance << endl;