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
    vector<float> nums = {1.2, 3.4, 5.6, 7.8};
    bool result = monotonic(nums);
    if(result){
        std::cout << "The vector is monotonic." << std::endl;
    }else{
        std::cout << "The vector is not monotonic." << std::endl;
    }

    // Add more test cases and print results here

    return 0;
}