#include <algorithm>
#include <vector>
#include <limits>

using namespace std;

bool issame(const vector<float>& v1, const vector<float>& v2) {
    if(v1.size()!=v2.size()) return false;
    for(int i=0; i<v1.size(); i++) 
        if(abs(v1[i]-v2[i])>numeric_limits<float>::epsilon()) 
            return false;
    return true;
}

vector<float> find_closest_elements(vector<float> numbers) {
    if (numbers.size() <= 1) {
        return {};
    }

    float min_diff = numeric_limits<float>::max();
    vector<float> closest_pair;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair = {numbers[i], numbers[j]};
            }
        }
    }

    return closest_pair;
}

int main() {
    vector<float> v1 = {0.1, 0.3, 0.2, 0.5};
    vector<float> v2 = {0.4, 0.6, 0.7, 0.8};

    if (issame(v1,v2)) {
        for(auto n:find_closest_elements(v1))
            cout<<n<<" ";
        cout<<endl;
    } else 
        cout << "These two vectors are not the same." << endl;

    return 0;
}