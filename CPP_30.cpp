#include <vector>

bool issame(std::vector<float> a, std::vector<float>b) {
    return (a.size() == b.size()) && (std::equal(a.begin(), a.end(), b.begin()));
}

int main() {
    vector<float> l;
    float num;

    // Read input from user
    while (true) {
        cout << "Enter a number (-1 to quit): ";
        cin >> num;
        
        if (num == -1) break;
        l.push_back(num);
    }

    vector<float> result = get_positive(l);

    // Print output
    for (float num : result) {
        cout << num << endl;
    }
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}