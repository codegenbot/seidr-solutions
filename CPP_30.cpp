#include <vector>

bool issame(vector<float> a, vector<float> b);

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float num : l){
        if(num > 0){
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    vector<float> numbers = {1.2, -3.4, 5.6, -7.8, 9.0};
    vector<float> positive_numbers = get_positive(numbers);
    for (float num : positive_numbers) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}