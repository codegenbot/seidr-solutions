#include <vector>

std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;

    if(n == 0) return result;

    int max_right = arr[n-1];
    for(int i=n-2; i>=0; i--) { 
        if(arr[i] >= max_right) {
            max_right = arr[i];
            result.push_back(max_right);
        }
    }

    std::reverse(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    std::vector<int> arr;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for(int i=0; i<n; i++) {
        int x;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> x;
        arr.push_back(x);
    }

    std::vector<int> result = leaders(arr);

    std::cout << "Leaders: ";
    for(int i=0; i<result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}