#include <vector>
#include <string>

bool issame(int totalChars1, int totalChars2) {
    return totalChars1 == totalChars2;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int totalChars1 = countTotalChars(lst1);
    int totalChars2 = countTotalChars(lst2);

    if (totalChars1 < totalChars2) {
        return lst1;
    } else {
        return issame(totalChars1, totalChars2) ? lst1 : lst2;
    }
}

int countTotalChars(std::vector<std::string> lst) {
    int totalChars = 0;
    for (std::string str : lst) {
        totalChars += str.size();
    }
    return totalChars;
}