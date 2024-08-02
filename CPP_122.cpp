```cpp
#include <vector>
#include <cmath>

int add_elements(std::vector<int> arr,int k){
    int sum = 0;
    for(int i = 0; i < min(k, (int)arr.size()); i++){
        if(log10(abs(arr[i])) <= 2)
            sum += arr[i];
    }
    return sum;

}

int main() {
    std::vector<int> vec;
    int num;
    int k;

    // Read input from user
    cout << "Enter the number of elements: ";
    cin >> k;
    vec.resize(k);

    for(int i = 0; i < k; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> num;
        vec[i] = num;
    }

    // Calculate and print the sum
    int result = add_elements(vec, k);
    cout << "Sum of elements: " << result << endl;

    return 0;
}