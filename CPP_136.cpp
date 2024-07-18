vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = 0, smallest_positive = 0;
    for (int num : lst) {
        if (num < 0 && num < largest_negative) {
            largest_negative = num;
        } else if (num > 0 && (num < smallest_positive || smallest_positive == 0)) {
            smallest_positive = num;
        }
    }
    return {largest_negative, smallest_positive};
}

int main() {
    // Sample test case
    vector<int> numbers = {3, -5, 2, -4, 6};
    vector<int> result = largest_smallest_integers(numbers);
    for (int num : result) {
        cout << num << " ";
    }
    
    return 0;
}