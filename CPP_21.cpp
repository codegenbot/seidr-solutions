bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) {
        cout << "Error: Vectors are not the same size." << endl;
        exit(1);
    }
    for(int i = 0; i < a.size(); i++) {
        if(abs(a[i] - b[i]) > 1e-9) {
            cout << "Error: Elements at index " << i << " are different." << endl;
            exit(1);
        }
    }
}