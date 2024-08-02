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
    while(true){
        cout << "Enter a number (-1 to stop): ";
        cin >> num;
        if(num == -1) break;
        vec.push_back(num);
    }

    int result = add_elements(vec, vec.size());
    // You can use the result here
    return 0;
}