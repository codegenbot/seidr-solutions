#include <vector>

vector<int> generate_integers(int a, int b){
    vector<int> result;
    for(int i = a; i <= b; i++){
        if(i % 2 == 0){
            result.push_back(i);
        }
    }
    return result;
}

int main(){
    int a, b;
    cin >> a >> b;
    vector<int> output = generate_integers(a, b);
    for(int num : output){
        cout << num << " ";
    }
    return 0;
}