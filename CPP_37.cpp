#include <iostream>
#include <vector>
#include <algorithm>

bool checkIfSame(std::vector<float> a, std::vector<float> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(abs(a[i]) != abs(b[i])) return false;
    }
    return true;
}

std::vector<float> sortEven(std::vector<float> l) {
    std::vector<float> result(l.size());
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            for(int k=i; k< l.size(); k=k+2){
                result[j++] = l[k];
            }
            std::sort(result.begin(),result.end());
            for(int i=0; i<4 && j<i+4;i++){
                result[i] = 0;
            }
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<float> v1, v2;
    for(int i=0; i<n; i++){
        float x;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> x;
        if(i%2==0) v1.push_back(x);
        else v2.push_back(x);
    }

    if(checkIfSame(v1, v2)) {
        std::vector<float> sorted = sortEven(v1);
        for(float x : sorted) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Vectors are not the same." << std::endl;
    }

    return 0;
}