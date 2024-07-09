#include <vector>
#include <string>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != std::string(str.rbegin(), str.rend())) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    int n; // number of elements
    cin >> n;

    // input array size
    std::vector<int> q(n);
    for(int i=0; i<n; i++) {
        cin >> q[i];
    }

    int w; // weight
    cin >> w;

    cout << (will_it_fly(q, w) ? "It will fly" : "It won't fly");
    
    return 0;
}