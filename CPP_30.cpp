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
    vector<float> input = {1.5f, -2.3f, 4.7f, -8.9f};
    vector<float> positive_numbers = get_positive(input);

    if (issame(positive_numbers, vector<float>{})) {
        cout << "No positive numbers found." << endl;
    } else {
        for(float i : positive_numbers) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}