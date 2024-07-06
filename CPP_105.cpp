```bool assertSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if(a.size() != (std::size_t)b.size()) {
        return false;
    }
    
    for(std::size_t i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    assert(same(by_length({1,4,8}) , {"One","Four","Eight"}));
    return 0;
}