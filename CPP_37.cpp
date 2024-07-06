bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> evenVals;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    evenVals.push_back(l[j]);
                }
            }
            sort(evenVals.begin(), evenVals.end());
            result[i] = evenVals[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    vector<float> input;
    // Input your code here
    for(int i=0; i<5; i++){
        float x;
        cin >> x;
        input.push_back(x);
    }

    vector<float> output = sort_even(input);

    if(issame(input, output)) {
        cout << "The sorted even elements are identical." << endl;
    } else {
        cout << "Sorted even elements: ";
        for(auto e : output) {
            cout << e << " ";
        }
        cout << endl;
    }

    return 0;
}