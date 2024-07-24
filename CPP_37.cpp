bool issame(float x, float y) {
    return abs(x - y) < 1e-9;
}

void sort_even(vector<float>& l) {
    vector<float> even_indices;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(l[i]);
        }
    }
    sort(even_indices.begin(), even_indices.end());

    vector<float> result;
    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_indices[even_index]);
            even_index++;
        } else {
            result.push_back(l[i]);
        }
    }

    l = result;
}

int main() {
    vector<float> my_vector = {3.5, 2.0, 10.0, 4.5, 8.2, 7.1};
    sort_even(my_vector);
    for(auto elem : my_vector) {
        cout << elem << " ";
    }

    return 0;
}