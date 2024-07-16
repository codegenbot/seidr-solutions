bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = INT_MIN, smallest_positive = INT_MAX;
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
    vector<int> input = {3, -5, 1, -8, 4};
    vector<int> result = largest_smallest_integers(input);
    cout << result[0] << " " << result[1] << endl;

    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    cout << issame(a, b) << endl;

    return 0;
}