#include <vector>
```
vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(int num : x){
        bool hasEvenDigit = false;
        int temp = num;
        while(temp > 0){
            int digit = temp % 10;
            if(digit % 2 == 0){
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if(!hasEvenDigit){
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    vector<int> arr1 = {123, 456, 789};
    vector<int> arr2 = {234, 567, 890};

    vector<int> uniqueArr1 = unique_digits(arr1);
    vector<int> uniqueArr2 = unique_digits(arr2);

    if(issame(uniqueArr1, arr1)){
        cout << "Array 1 contains only odd digits" << endl;
    }
    else{
        cout << "Array 1 contains even digits" << endl;
    }

    if(issame(uniqueArr2, arr2)){
        cout << "Array 2 contains only odd digits" << endl;
    }
    else{
        cout << "Array 2 contains even digits" << endl;
    }

    return 0;
}