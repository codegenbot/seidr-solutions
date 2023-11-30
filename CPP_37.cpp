vector<float> sort_even(vector<float> l){
    vector<float> result = l;
    sort(result.begin(), result.end(), [](float a, float b) {
        return ((int)a % 2 == 0 && (int)b % 2 == 0 && a < b);
    });
    return result;
}