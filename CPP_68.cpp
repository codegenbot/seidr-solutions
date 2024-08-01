using namespace std;

vector<pair<int, int>> pluck(vector<vector<int>> arr) {
    vector<pair<int, int>> result;
    
    for(auto& v : arr) {
        if(v.empty()) continue;
        
        int minEvenValue = INT_MAX;
        int minIndex = -1;
        
        for(int i = 0; i < v.size(); i++) {
            if(v[i] % 2 == 0 && v[i] < minEvenValue) {
                minEvenValue = v[i];
                minIndex = i;
            }
        }
        
        if(minIndex != -1) {
            result.push_back({minEvenValue, minIndex});
        }
    }
    
    return result;
}