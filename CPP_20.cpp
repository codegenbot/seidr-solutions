#include <numeric>
#include <algorithm>

int cpp20_Main(){
    int n;
    cin >> n;
    vector<float> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    if(isSame(a, b)) cout << "The vectors are the same." << endl;
    else cout << "The vectors are not the same." << endl;
    return 0;
}

float find_closest_elements(vector<float> vec) {
    float min_diff = numeric_limits<float>::max();
    for(int i=1; i<vec.size(); i++){
        if(abs(vec[i] - vec[i-1]) < min_diff)
            min_diff = abs(vec[i] - vec[i-1]);
    }
    return min_diff;
}

bool isSame(vector<float>& a, vector<float>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}