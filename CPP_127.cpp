#include <vector>
#include <string>

int is_prime(int n);
string intersection(vector<int> interval1, vector<int> interval2);

int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

string intersection(vector<int> interval1, vector<int> interval2) {
    int start1 = interval1[0], end1 = interval1[1];
    int start2 = interval2[0], end2 = interval2[1];
    
    int start = max(start1, start2);
    int end = min(end1, end2);
    
    if (start > end) {
        return "NO";
    }
    
    int length = end - start;
    
    if (is_prime(length)) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    assert (intersection({-2, -2}, {-3, -2}) == "NO");
    return 0;
}