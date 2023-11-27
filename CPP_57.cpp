#include <vector>

bool monotonic(vector<float> l){
    bool increasing = true;
    bool decreasing = true;

    for(int i=1; i<l.size(); i++){
        if(l[i] < l[i-1]){
            increasing = false;
        }
        if(l[i] > l[i-1]){
            decreasing = false;
        }
    }

    return increasing || decreasing;
}

int main(){
    vector<float> test1 = {1.0, 2.0, 3.0, 4.0};
    vector<float> test2 = {4.0, 3.0, 2.0, 1.0};
    vector<float> test3 = {1.0, 2.0, 3.0, 2.0};

    bool result1 = monotonic(test1);
    bool result2 = monotonic(test2);
    bool result3 = monotonic(test3);

    cout << result1 << endl;
    cout << result2 << endl;
    cout << result3 << endl;

    return 0;
}