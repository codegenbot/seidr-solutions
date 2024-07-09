#include <cassert>

int how_many_times(const std::string& full_name, const std::string& name) {
    int count = 0;
    size_t pos = 0;
    while ((pos = full_name.find(name, pos)) != std::string::npos) {
        ++count;
        pos += name.size();
    }
    return count;
}

int main() {
    assert(how_many_times(std::string("john doe"), std::string("john")) == 1);
    return 0;
}