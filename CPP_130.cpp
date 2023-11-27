#include <vector>

vector<int> tri(int n);

bool issame(vector<int> list1, vector<int> list2);

vector<int> tri(int n){
    vector<int> sequence;
    sequence.push_back(3);
    
    if(n == 0){
        return sequence;
    }
    
    sequence.push_back(1);
    
    if(n == 1){
        return sequence;
    }
    
    sequence.push_back(2);
    
    if(n == 2){
        return sequence;
    }
    
    int i = 3;
    while(i <= n){
        if(i % 2 == 0){
            sequence.push_back(1 + i / 2);
        }else{
            sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i + 1]);
        }
        i++;
    }
    
    return sequence;
}

bool issame(vector<int> list1, vector<int> list2){
    if(list1.size() != list2.size()){
        return false;
    }
    
    for(int i = 0; i < list1.size(); i++){
        if(list1[i] != list2[i]){
            return false;
        }
    }
    
    return true;
}