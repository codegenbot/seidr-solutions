bool is_same(vector<float> a, vector<float> b) {
    return a == b;
}

vector<float> sort_even(vector<float> l) {
    vector<float> even_values;
    vector<float> sorted_even_values;
    vector<float> result;

    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
            sorted_even_values.push_back(l[i]);
        }
    }

    sort(sorted_even_values.begin(), sorted_even_values.end());

    int even_index = 0;
    int sorted_even_index = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            result.push_back(even_values[even_index]);
            even_index++;
        } else {
            result.push_back(sorted_even_values[sorted_even_index]);
            sorted_even_index++;
        }
    }

    return result;
}

int main() {
    assert(is_same(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10});
    return 0;
}