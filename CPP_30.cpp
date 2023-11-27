vector<float> get_positive(vector<float> l); /* Function declaration */

vector<float> get_positive(vector<float> l){
    vector<float> positive_nums;
    for(int i=0; i<l.size(); i++){
        if(l[i] > 0){
            positive_nums.push_back(l[i]);
        }
    }
    return positive_nums;
}

int main() {
    vector<float> l = {1.2, -3.4, 5.6, -7.8};
    vector<float> result = get_positive(l);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}