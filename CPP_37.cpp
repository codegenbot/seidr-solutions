#include <vector>
#include <algorithm>

vector<float> sort_even(vector<float> l);

bool issame(vector<float> a, vector<float> b);

int main() {
    // Test cases
    vector<float> test1 = {1.2, 3.4, 5.6, 7.8, 9.0};
    vector<float> result1 = sort_even(test1);
    // Print the sorted even elements
    for (float num : result1) {
        cout << num << " ";
    }
    cout << endl;

    vector<float> test2 = {2.2, 4.4, 6.6, 8.8, 10.0};
    vector<float> result2 = sort_even(test2);
    // Print the sorted even elements
    for (float num : result2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

vector<float> sort_even(vector<float> l){
    vector<float> l_prime;
    for(int i=0; i<l.size(); i++){
        if(i % 2 == 0){
            l_prime.push_back(l[i]);
        }
    }
    sort(l_prime.begin(), l_prime.end());
    int j = 0;
    for(int i=0; i<l.size(); i++){
        if(i % 2 == 0){
            l_prime.insert(l_prime.begin() + i, l[j]);
            j++;
        }
    }
    return l_prime;
}