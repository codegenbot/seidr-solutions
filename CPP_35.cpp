Here is the completed code:

int main() {
    vector<float> l = {1.0f, 2.0f, 3.0f};
    cout << max_element(l) << endl;
    return 0;
}

float max_element(vector<float> l){
    float m = l[0];
    for (auto i : l) {
        if(i > m) m = i;
    }
    return m;
}