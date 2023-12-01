vector<int> largest_smallest_integers(vector<int> lst){
    int max_negative = 0;
    int min_positive = 0;
    
    for(int num : lst){
        if(num < 0 && num < max_negative){
            max_negative = num;
        }
        if(num > 0 && (num < min_positive || min_positive == 0)){
            min_positive = num;
        }
    }
    
    return {max_negative, min_positive};
}

bool issame(vector<int> a, vector<int> b);

int main() {
    // code here
    return 0;
}