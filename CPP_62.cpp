int main(){
    int n;
    cin >> n;
    vector<float> xs(n);
    for(int i=0; i<n; i++){
        cin >> xs[i];
    }
  
    vector<float> result;
    for(int i=1; i<n; i++){
        result.push_back(xs[i] * i);
    }  

    return result;
}