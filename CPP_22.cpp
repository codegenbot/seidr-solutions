#include <any>
#include <vector>

bool issame(int a, int b) { return a == b; }
bool issame(char a, char b) { return a == b; }

bool issame(std::vector<int> a,std::vector<int>b){
    return std::equal(a.begin(),a.end(),b.begin());
}

std::any make_any(const std::vector<int>& vec) {
    return vec;
}

int main() {
    std::any values = std::make_any(std::vector<int>{{3, 3, 3}});
    auto output = filter_integers(values);
    assert(issame(output.size(), 1));
    assert(issame(output[0], 3));
    return 0;
}

std::vector<int> filter_integers(std::any values) {
    std::vector<int> result;
    if (values.type() == typeid(std::vector<int>)) {
        for (auto val : std::any_cast<std::vector<int>>(values)) {
            result.push_back(val);
        }
    }
    return result;
}