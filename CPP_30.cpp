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
    if(v1.size() != v2.size())
        return false;
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i])
            return false;
    }
    return true;
}

int main() {
    vector<float> l;
    cout << "Enter the numbers (space-separated): ";
    while (cin >> l.push_back) {
        break;
    }
    vector<float> pos = get_positive(l);
    if(issame(pos, l))
        cout << "The list of positive numbers is same as the original list.\n";
    else
        cout << "The list of positive numbers is different from the original list.\n";
    return 0;
}