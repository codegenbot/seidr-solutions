#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string>b) {
    return a == b;
}

int main() {
    vector<int> arr = {4,3,5};
    vector<string> output = by_length(arr);
    bool same = issame(output, {"Eight","Nine","Five"});
    if(same)
        cout << "The output is the same."<< endl;
    else
        cout << "The output is not the same."<< endl;

    return 0;
}