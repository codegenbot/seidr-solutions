#include <iostream>
#include <vector>

bool filter_integers(const std::vector<int>& a, const std::vector<int>& b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main() { 
    int n;
    std::cin >> n;

    std::vector<int> a(0);
    std::vector<int> b(0);

    for(int i = 0; i < n; ++i)
        {
            int x;
            std::cin >> x;
            a.push_back(x);
        }

    for(int i = 0; i < n; ++i)
        {
            int x;
            std::cin >> x;
            b.push_back(x);
        }

    if (filter_integers(a, b))
        std::cout << "The two vectors are the same." << std::endl;
    else
        std::cout << "The two vectors are not the same." << std::endl;

    return 0;
}