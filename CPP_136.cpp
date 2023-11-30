vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result(2, 0);

    int largest_negative = 0;
    int smallest_positive = 0;

    for(int i=0; i<lst.size(); i++){
        if(lst[i] < 0){
            if(lst[i] < largest_negative){
                largest_negative = lst[i];
            }
        }
        else if(lst[i] > 0){
            if(smallest_positive == 0 || lst[i] < smallest_positive){
                smallest_positive = lst[i];
            }
        }
    }

    result[0] = largest_negative;
    result[1] = smallest_positive;

    return result;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    assert (issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), { -100, 1 }));

    return 0;
}