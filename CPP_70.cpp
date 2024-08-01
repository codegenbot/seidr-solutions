#include <algorithm>
using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        
        if (min_val == max_val) {
            result.push_back(min_val);
            lst.pop_back();
        } else {
            result.push_back(min_val);
            vector<int> new_lst;
            for (int x : lst) {
                if (x != min_val) {
                    new_lst.push_back(x);
                }
            }
            lst = new_lst;
        }
    }
    
    return result;
}

int main() {
    vector<int> input_vector;
    int num_elements;
    cout << "Enter the number of elements: ";
    cin >> num_elements;
    cout << "Enter " << num_elements << " integers: ";
    for (int i = 0; i < num_elements; i++) {
        int num;
        cin >> num;
        input_vector.push_back(num);
    }
    
    vector<int> output_vector = strange_sort_vector(input_vector);
    
    cout << "Sorted Vector: ";
    for (int x : output_vector) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}