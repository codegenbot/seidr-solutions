// Forward declaration
vector<int> order_by_points(vector<int> nums);

// Function to check if two vectors are the same
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

// Main function
int main(){
    // Test the order_by_points function
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));

    return 0;
}