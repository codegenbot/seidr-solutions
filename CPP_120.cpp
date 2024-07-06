#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    for (int i = 0; i < k; ++i) {
        int max_val = *std::max_element(arr.begin(), arr.end());
        result.push_back(max_val);
        auto it = std::remove_if(arr.begin(), arr.end(), [max_val](int x){return x==max_val;});
        arr.erase(it, arr.end());
    }
    return result;
}

int main() {
    int n = 7;
    std::vector<int> array (n);
    for(int i=0; i<n; ++i){
        array[i] = i+1;
    }
    array[3] = -23;
    array[4] = 243;
    array[5] = -400;
    array[6] = 0;

    int k = 4;
    std::vector<int> result = maximum(array, k);

    for(int i=0; i<k; ++i) {
        std::cout << "The " << i+1 << "th largest element is " << result[i] << std::endl;
    }

    return 0;
}