#include<vector>
using namespace std;
vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = 0, smallest_positive = 0;
    for(int num : lst){
        if(num < 0){
            if(num < largest_negative){
                largest_negative = num;
            }
        }
        else if(num > 0){
            if(num < smallest_positive || smallest_positive == 0){
                smallest_positive = num;
            }
        }
    }
    return {largest_negative, smallest_positive};
}