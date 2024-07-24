#include <vector>
#include <cmath>

bool isSame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 1e-6f) return false;
    }
    return true;

}

int main(){
    int n;
    std::cin >> n;

    std::vector<float> a(n), b(n);
    for(int i = 0; i < n; i++){
        std::cin >> a[i] >> b[i];
    }

    if(isSame(a, b))
        std::cout << "The two vectors are the same.\n";
    else
        std::cout << "The two vectors are not the same.\n";

    return 0;
}