#include <iostream>
#include <vector>
using namespace std;

int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int temp = num;
        
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum > 0) count++;
    }
    return count;
}

int main() {
    int size;
    cin >> size;
    vector<int> numbers(size);
    for(int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }

    cout << count_nums(numbers) << endl;
    return 0;
}