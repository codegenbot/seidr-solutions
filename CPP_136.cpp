vector<int> largest_smallest_integers(vector<int> lst);

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = 0, smallest_positive = 0;
    for(int num : lst){
        if(num < 0 && num < largest_negative){
            largest_negative = num;
        }
        if(num > 0 && (num < smallest_positive || smallest_positive == 0)){
            smallest_positive = num;
        }
    }
    return {largest_negative, smallest_positive};
}

int main(){
    vector<int> input = {3, -5, 2, -1, 7};
    vector<int> result = largest_smallest_integers(input);
    return 0;
}