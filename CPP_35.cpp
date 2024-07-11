using namespace std;

int max_value = -1;
int min_value = INT_MAX;

vector<pair<int, int>> p;
for (int i = 0; i < 6; ++i) {
    int x, y;
    cin >> x >> y;
    p.push_back({x, y});
}

auto max_pair = *std::max_element(p.begin(), p.end());

min_value = min({p[i].first for i in range(6)})[0];

cout << "Maximum value: " << get<1>(max_pair) << endl;
cout << "Minimum value: " << min_value << endl;