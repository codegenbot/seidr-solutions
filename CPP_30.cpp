vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float i : l){
        if(i > 0){
            result.push_back(i);
        }
    }
    return result;
}

bool issame(vector<float> v1, vector<float> v2) {
    if(v1.size() != v2.size()) {
        return false;
    }
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<float> l1 = {1.5, -3.4, 7.8};
    vector<float> l2 = {-1.2, 3.9, -6.7};
    vector<float> l3 = {0.0, 1.1, 2.2};

    vector<float> pos_l1 = get_positive(l1);
    vector<float> pos_l2 = get_positive(l2);
    vector<float> pos_l3 = get_positive(l3);

    if(issame(pos_l1, pos_l2) || issame(pos_l1, pos_l3)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}