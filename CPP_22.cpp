#include <vector>
#include <list>

bool issame(const std::vector<bool>& a, const std::vector<bool>& b) {
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] && !b[i])
            return false;
        if (!a[i] && b[i])
            return false;
    }
    return true;
}

std::vector<int> filter_integers(std::list<bool> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value) {
            int num;
            // Check that the next value in the list is an integer
            for (auto it = values.begin(); it != values.end(); ++it) {
                if (std::any_cast<bool>(*it)) {
                    continue;
                }
                try {
                    num = std::any_cast<int>(*it);
                    result.push_back(num);
                    break;
                } catch(const std::bad_any_cast& e) {
                    // handle error
                }
            }
        }
    }
    return result;
}