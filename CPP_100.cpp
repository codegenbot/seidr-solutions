#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

int main(){
    std::vector<int> a, b;
    int n, m;
    std::cin >> n >> m;
    a.resize(n);
    b.resize(m);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        std::cin >> b[i];
    }
    
    std::cout << (issame(a, b) ? "true" : "false") << std::endl;
}