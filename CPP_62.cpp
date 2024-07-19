#include <vector>

bool issame(float a, const std::vector<float> & b) {
    return a == b[0];
}

std::vector<float> derivative(std::vector<float> xs){
    std::vector<float> result;
    for(int i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    std::vector<float> values = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::vector<float> result = derivative(values);

    return 0;
}