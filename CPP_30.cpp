#include <vector>
#include <iostream>

bool isSame(vector<float> a, vector<float> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    vector<float> l1 = { -1.0f, 2.0f, -3.0f };
    vector<float> l2 = { -4.0f, 5.0f, -6.0f };
    vector<float> result1 = get_positive(l1);
    vector<float> result2 = get_positive(l2);

    if (isSame(result1, vector<float>())) {
        std::cout << "result1 is empty" << std::endl;
    }
    else
        for (float i : result1)
            std::cout << i << " ";
    
    std::cout << std::endl;

    if (isSame(result2, vector<float>())) {
        std::cout << "result2 is empty" << std::endl;
    }
    else
        for (float i : result2)
            std::cout << i << " ";
    
    std::cout << std::endl;
    return 0;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for(float i : l){
        if(i > 0) {
            result.push_back(i);
        }
    }
    return result;
}