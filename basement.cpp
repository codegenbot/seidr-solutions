#include <vector>
using namespace std;

int basementIndex(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    vector<int> inputs;
    int n;
    cin >> n;
    while(n--) {
        cin.ignore();
        string s;
        getline(cin, s);
        inputs.clear();
        size_t pos = 0;
        while((pos = s.find(' ')) != string::npos) {
            inputs.push_back(stoi(s.substr(0, pos)));
            s.erase(0, pos + 1);
        }
        inputs.push_back(stoi(s));
        int result = basementIndex(inputs);
        cout << result << endl;
    }
    return 0;
}