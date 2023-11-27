#include <vector>

int search(const std::vector<int>& lst){
    int maxFreq = -1;
    
    for(int i = 0; i < lst.size(); i++){
        int freq = 0;
        
        for(int j = 0; j < lst.size(); j++){
            if(lst[j] == lst[i]){
                freq++;
            }
        }
        
        if(freq >= lst[i] && lst[i] > maxFreq){
            maxFreq = lst[i];
        }
    }
    
    return maxFreq;
}

int main(){
    assert(search({3, 10, 10, 9, 2}) == -1);
    
    return 0;
}