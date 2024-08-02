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
    
    // Input elements from user
    cout << "Enter the number of elements: ";
    cin >> num;
    vec.resize(num);
    
    for(int i = 0; i < num; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> vec[i];
    }
    
    int result = add_elements(vec, num);
    
    // Print the sum
    cout << "Sum: " << result << endl;
    
    return 0;
}