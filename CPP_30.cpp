using namespace std;

vector<vector<float>> get_positive(vector<vector<float>> l){
    vector<vector<float>> result;
    for(float num : l) {
        if(num > 0) {
            result.push_back({num});
        }
    }
    return result;