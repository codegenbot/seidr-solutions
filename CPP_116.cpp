#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;

vector<int> sort_array(vector<int> arr) {
    vector<int> result = arr;
    sort(result.begin(), result.end(), [](int a, int b){
        bitset<32> bits_a(a);  
        bitset<32> bits_b(b);  
        if (bits_a.count() != bits_b.count())
            return bits_a.count() < bits_b.count();
        else
            return a < b;
    });
    return result;
}