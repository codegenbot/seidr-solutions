#include <initializer_list>
#include <vector>
#include <algorithm> // For sort function
using namespace std;

float calculateMedian(vector<float> v) {
    sort(v.begin(), v.end());
    int n = v.size();
    if (n % 2 == 0)
        return (v[n/2 - 1] + v[n/2]) / 2;
    else
        return v[n/2];
}

int main() {
    vector<float> numbers;
    float num;
    
    while (cin >> num) {
        numbers.push_back(num);
    }
    
    cout << calculateMedian(numbers) << endl;

    return 0;
}