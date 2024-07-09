#include <vector>

// Define the issame function
bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size();
}

// Define the get_positive function
std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(get_positive({}) == {});
    vector<float> numbers;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        float num;
        cin >> num;
        numbers.push_back(num);
    }
    
    std::vector<float> pos_numbers = get_positive(numbers);
    if(issame({1.0},pos_numbers)) {
        cout << "The numbers are the same." << endl;
    } else {
        cout << "The numbers are not the same." << endl;
    }
}