#include <iostream>
using namespace std;

int main() {
    double start_height;
    string str_start_height;
    getline(cin, str_start_height);
    start_height = stod(str_start_height);

    double first_bounce_height;
    string str_first_bounce_height;
    getline(cin, str_first_bounce_height);
    first_bounce_height = stod(str_first_bounce_height);

    int num_bounces;
    string str_num_bounces;
    getline(cin, str_num_bounces);
    num_bounces = stoi(str_num_bounces);

    double bounciness_index = first_bounce_height / start_height;

    double total_distance = 0.0;
    for(int i = 1; i <= num_bounces; ++i) {
        total_distance += (1 + bounciness_index) * pow(2.0, i);
    }

    cout.precision(6);
    cout << fixed << total_distance;

    return 0;
}