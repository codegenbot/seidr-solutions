#include <vector>

bool issame(float a, std::vector<float> b);

std::vector<float> derivative(std::vector<float> xs){
    std::vector<float> result;
    for(int i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(float a, std::vector<float> b){
    // Your implementation here
}

int main(){
    // Your main function code here
}