#include <vector>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> generate_integers(int a, int b){
    vector<int> result;
    for (int i = a; i <= b; ++i) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    int a, b;
    cin >> a >> b;
    
    vector<int> first = generate_integers(a, b);
    vector<int> second = generate_integers(a, b);
    
    if(issame(first, second)){
        cout << "Both vectors are the same" << endl;
    } else {
        cout << "Vectors are different" << endl;
    }
    
    return 0;
}