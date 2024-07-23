#include <vector>
#include <algorithm>

bool isEqual(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> strangeSortList(std::vector<int> myList) {
    std::sort(myList.begin(), myList.end());
    for (int i = 0; i < myList.size(); i++) {
        if ((i + 1) % 3 == 0) {
            std::reverse(myList.begin() + i, myList.begin() + (i + 1));
        }
    }
    return myList;
}

int main() {
    std::vector<int> myList;
    myList.push_back(1);
    myList.push_back(1);
    myList.push_back(1);
    myList.push_back(1);
    myList.push_back(1);
    myList.push_back(1);
    assert(isEqual(strangeSortList(myList), myList));
    return 0;