#include <iostream>
using namespace std;

int main() {
    double start_height;
    double first_bounce_height;
    int num_bounces;

    // read input from user
    cin >> start_height >> first_bounce_height >> num_bounces;

    // calculate bounciness index
    double bounciness_index = first_bounce_height / start_height;

    // calculate total distance traveled
    double total_distance = (1 - pow(bounciness_index, num_bounces)) / (1 - bounciness_index);

    // print output
    cout << fixed << setprecision(6) << total_distance << endl;

    return 0;
}