#include <algorithm>
#include <numeric>

using namespace std;

bool areEqual(vector<float> a,vector<float>b){
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

vector<pair<float, float>> find_closest_elements(vector<vector<float>>& numbers) {
    vector<pair<float, float>> result;
    for(int i = 0; i < numbers.size(); i++){
        sort(numbers[i].begin(), numbers[i].end());
        float min_diff = numeric_limits<float>::max();
        pair<float, float> closest_pair;

        for (int j = 0; j < numbers[i].size() - 1; j++) {
            float diff = numbers[i][j + 1] - numbers[i][j];
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair.first = numbers[i][j];
                closest_pair.second = numbers[i][j + 1];
            }
        }

        result.push_back(closest_pair);
    }

    return result;
}

int main() {
    vector<vector<float>> numbers = {{1.0,2.0,3.0},{4.0,5.0,6.0}};
    vector<pair<float, float>> closest_elements = find_closest_elements(numbers);

    for(auto& pair:closest_elements){
        cout << "(" << pair.first << ", " << pair.second << ")" << endl;
    }

    return 0;
}