#include <vector>
#include <limits>

std::pair<float, float> find_closest_elements(float n1, float n2, float n3, float n4, float n5) {
    if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5)
        return {n1, 0.0};
    
    if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5)
        return {n2, 0.0};
    
    if (n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5)
        return {n3, 0.0};
    
    if (n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5)
        return {n4, 0.0};
    
    return {n5, 0.0};
}

bool issame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(abs(a[i] - b[i]) > 1e-9)
            return false;
    }
    return true;
}

int main() {
    std::pair<float, float> result = find_closest_elements((float)1.1, (float)2.2, (float)3.1, (float)4.1, (float)5.1);
    
    if (!issame({result.first}, {result.second})) {
        return 1;
    }
    return 0;
}