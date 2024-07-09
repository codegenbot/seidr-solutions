int main
{
    int n;
    cin >> n;
    string s = to_string(n);
    cout << "Number of collisions: " << car_race_collision(s) << endl;
    return 0;