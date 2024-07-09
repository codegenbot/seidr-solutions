#include <vector>
#include <algorithm>
#include <initializer_list>

bool issame(std::vector<int> a, std::vector<int> b){
    return (a==b);
}

int main() {
    std::vector<int> input;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        input.push_back(x);
    }
    
    vector<int> a(input), b(input);
    // your logic here
}