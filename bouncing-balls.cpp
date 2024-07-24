#include <iostream>
using namespace std;

int main() {
    double start_height, bounce_height;
    int num_bounces;

    cin >> start_height >> bounce_height >> num_bounces;

    double bounciness = bounce_height / start_height;
    double total_distance = (1 + bounciness) * (1 - pow(bounciness, num_bounces)) / (1 - bounciness);

    cout << fixed << setprecision(4);
    cout << total_distance << endl;

    return 0;
}