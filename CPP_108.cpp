#include <vector>

int main() {
    int count_nums(vector<int> n){
        int count = 0;
        for(int i=0; i<n.size(); i++){
            int sum = 0;
            int num = n[i];
            while(num != 0){
                sum += abs(num % 10);
                num /= 10;
            }
            if(sum > 0){
                count++;
            }
        }
        return count;
    }
    return 0;
}