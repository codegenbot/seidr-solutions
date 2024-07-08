#include <vector>

bool will_it_fly(const vector<int>& q, int w) {
    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    if (sum > w) {
        return false;
    }
    for (int i = 0; i < q.size(); i++) {
        if (q[i] != q[q.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

int main()
{
    std::vector<int> q{5};
    int w = 10;
    bool result = will_it_fly(q, w);
    return 0;
}