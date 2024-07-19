bool issame(vector<int> a, vector<int> b);

vector<int> largest_smallest_integers(vector<int> lst);

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;
    
    for(int num : lst){
        if(num < 0 && num > largest_negative){
            largest_negative = num;
        }
        if(num > 0 && num < smallest_positive){
            smallest_positive = num;
        }
    }
    
    return {largest_negative, smallest_positive};
}

int main() {
    bool result = issame(vector<int>{-3, 1}, largest_smallest_integers({-6, -4, -4, -3, -100, 1}));
    return 0;
}