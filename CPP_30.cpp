#include <iostream>
#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> result;
    for(float i : l){
        if(i > 0){
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    vector<float> input;
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;
    for(int i = 0; i < num; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> num;
        input.push_back(num);
    }
    
    vector<float> pos = get_positive(input);
    
    if(pos.empty()) {
        cout << "No positive numbers found." << endl;
    } else {
        cout << "Positive numbers: ";
        for(float i : pos) {
            cout << i << " ";
        }
        cout << endl;
        
        bool same = issame(get_positive(input), pos);
        if(same) {
            cout << "The positive numbers are the same." << endl;
        } else {
            cout << "The positive numbers are different." << endl;
        }
    }
    
    return 0;
}