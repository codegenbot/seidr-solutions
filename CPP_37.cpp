#include <vector>
using namespace std;

bool issame(vector<float> a, vector<float> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<float> sort_even(vector<float> l);

int main() {
    // Test the sort_even function
    vector<float> l = {5.5, 2.2, 3.3, 4.4, 1.1};
    vector<float> sorted = sort_even(l);
    for(int i=0; i<sorted.size(); i++){
        cout << sorted[i] << " ";
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