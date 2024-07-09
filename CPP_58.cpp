#include <vector>
#include <set>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main1() {
    std::vector<int> l1 = {1,2,3};
    std::vector<int> v2 = {4,5,6};
    std::set<int> common_result;
    common_result.insert(common_result.end(), std::set_intersection(l1.begin(), l1.end(), v2.begin(), v2.end(),
        std::inserter(common_result, common_result.begin())));
    return 0;
}

int main2() {
    std::vector<int> input1, input2;
    // Read inputs from user
    int n1, m1, n2, m2;
    std::cout << "Enter the size of first vector: ";
    std::cin >> n1;
    for(int i = 0; i < n1; i++) {
        std::cin >> m1;
        input1.push_back(m1);
    }
    
    std::cout << "Enter the size of second vector: ";
    std::cin >> n2;
    for(int i = 0; i < n2; i++) {
        std::cin >> m2;
        input2.push_back(m2);
    }
    
    bool result = issame(input1, input2);
    assert(result); // Check the condition
    return 0;
}