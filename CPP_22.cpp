#include <vector>
#include <list>
#include <any>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int val = boost::any_cast<int>(value);
            result.push_back(val);
        }
    }
    return result;
}

int main() {
    assert(std::equal(filter_integers({3, std::any(), 3, 3, std::any(), std::any()}).
                        begin(), filter_integers({3, 3, 3}).begin(),
                    filter_integers({3, 3, 3}).end()));
    return 0;
}