#include <vector>
#include <set>
#include <algorithm>
#include <sstream>
#include <initializer_list<>>

namespace std {
    bool same(std::vector<int> a, std::vector<int> b) {
        if (a.size() != b.size()) return false;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) return false;
        }
        return true;
    }

    std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
        std::set<int> set1(l1.begin(), l1.end());
        std::set<int> set2(l2.begin(), l2.end());
        std::vector<int> intersection;
        for (int i = 0; i < set1.size(); i++) {
            int element = *set1.begin() + i;
            if(set2.find(element) != set2.end()){
                intersection.push_back(element);
            }
        }
        return intersection;
    }

    int main() {
        std::vector<int> l1;
        int n1;
        std::cout << "Enter the number of elements in list 1: ";
        std::cin >> n1;
        for(int i = 0; i < n1; i++) {
            int x;
            std::cout << "Enter element " << i + 1 << ": ";
            std::cin >> x;
            l1.push_back(x);
        }

        std::vector<int> l2;
        int n2;
        std::cout << "Enter the number of elements in list 2: ";
        std::cin >> n2;
        for(int i = 0; i < n2; i++) {
            int x;
            std::cout << "Enter element " << i + 1 << ": ";
            std::cin >> x;
            l2.push_back(x);
        }

        if(std::same(l1, l2)) { 
            std::cout << "The two lists are the same." << std::endl;
        } else {
            std::cout << "The two lists are different." << std::endl;
        }

        std::vector<int> intersection = common(l1, l2);
        if(intersection.size() != 0) {
            for(int i = 0; i < intersection.size(); i++) {
                std::cout << intersection[i] << " ";
            }
            std::cout << std::endl;
        } else {
            std::cout << "No common elements." << std::endl;
        }

        return 0;
    }