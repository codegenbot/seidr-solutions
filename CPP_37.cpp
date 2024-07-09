bool issame(vector<float> a,vector<float>b){
    return a == b;
}

vector<float> sort_even(vector<float> nums) {
    vector<float> result = {0};
    for (float num : nums) {
        if (num % 2 == 0)
            result.push_back(num);
    }
    sort(result.begin(), result.end());
    return result;
}
int main() {
    vector<float> l = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> evenVals = sort_even(l);
            result[i] = evenVals[0];
        } else {
            result[i] = l[i];
        }
    }
    return 0;
}