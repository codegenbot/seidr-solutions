#include <vector>

std::vector<int> pluck(const std::vector<int>& v) {
    int output[1];
    for(int i=0; i<1; i++) {
        output[i] = v[0];
    }
    return std::vector<int>(output, output + 1);
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[]) {
    assert(issame(pluck({7, 9, 7, 1}), std::vector<int>{}));
    return 0;
}