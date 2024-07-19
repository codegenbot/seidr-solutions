#include <vector>

vector<float> get_positive(vector<float> l);

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main(){
    vector<float> numbers = {1.5, -0.5, 2.0, -3.7, 4.2};
    vector<float> positive_numbers = get_positive(numbers);
    for (float num : positive_numbers) {
        cout << num << " ";
    }
    return 0;
}