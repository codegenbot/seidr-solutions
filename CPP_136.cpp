vector<int> largest_smallest_integers(vector<int> lst) {
    int largest_negative = 0;
    int smallest_positive = 0;
    bool found_negative = false;
    bool found_positive = false;

    for(int num : lst) {
        if(num < 0) {
            if(!found_negative || num > largest_negative) {
                largest_negative = num;
                found_negative = true;
            }
        } else if(num > 0) {
            if(!found_positive || num < smallest_positive) {
                smallest_positive = num;
                found_positive = true;
            }
        }
    }

    return {found_negative ? largest_negative : 0, found_positive ? smallest_positive : 0};
}