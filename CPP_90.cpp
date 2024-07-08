int next_smallest(vector<int> lst){
    if(lst.size() < 2) return -1; 
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for(int i = 0; i < sorted.size()-1; i++){
        if(sorted[i] != sorted[i+1]) return sorted[i+1];
    }
    return -1; 
}

int main() {
    vector<int> lst = {4,2,6};
    cout << "The next smallest number is: " << next_smallest(lst) << endl;
    return 0;
}