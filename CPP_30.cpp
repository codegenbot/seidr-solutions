#include <vector>
using namespace std;

bool issame(vector<float> a, vector<float> b);

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float i : l) {
        if(i > 0)
            result.push_back(i);
    }
    return result;
}

int main() {
    vector<float> numbers = {1.2f, -3.4f, 5.6f, -7.8f};
    vector<float> positive_numbers = get_positive(numbers);

    if (issame(get_positive(numbers), get_positive(positive_numbers))) {
        cout << "The lists are the same." << endl;
    } else {
        cout << "The lists are different." << endl;
    }

    return 0;
}