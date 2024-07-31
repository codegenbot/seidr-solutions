#include <vector>

void sort_even(vector<float>& l);

bool issame(vector<float> a, vector<float> b) {
    sort_even(a);
    sort_even(b);
    return a == b;
}

void sort_even(vector<float>& l) {
    vector<float> even_elems;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_elems.push_back(l[i]);
        }
    }
    sort(even_elems.begin(), even_elems.end());

    vector<float> result;
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_elems[j]);
            j++;
        } else {
            result.push_back(l[i]);
        }
    }
    
    l = result;
}

int main() {
    vector<float> vec1 = {3.4, 1.2, 5.6, 7.8, 2.3};
    vector<float> vec2 = {1.2, 3.4, 5.6, 7.8, 2.3};

    sort_even(vec1);
    sort_even(vec2);

    bool output = issame(vec1, vec2);
    
    return 0;
}