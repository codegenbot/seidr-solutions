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
    vector<float> nums = {1.5, 2.3, 5.2, 8.1};
    bool result = monotonic(nums);

    if(result){
        cout << "The list is monotonic" << endl;
    }
    else{
        cout << "The list is not monotonic" << endl;
    }

    return 0;
}