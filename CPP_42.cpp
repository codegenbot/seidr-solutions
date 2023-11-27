#include <vector>

using namespace std;

vector<int> incr_list(vector<int> l);

int main() {
    vector<int> input = {1, 2, 3, 4, 5};
    vector<int> result = incr_list(input);
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}

vector<int> incr_list(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        result.push_back(l[i] + 1);
    }
    return result;
}