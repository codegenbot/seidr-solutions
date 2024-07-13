int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin >> vec[i];
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += vec[i];
    }

    int prefixSum = 0;
    for(int i=0; i<n; i++){
        prefixSum += vec[i];
        if(prefixSum * 2 >= sum){
            vector<int> subVector1(vec.begin(), vec.begin() + i + 1);
            vector<int> subVector2(vec.begin() + i + 1, vec.end());
            for(int num : subVector1){
                cout << num << endl;
            }
            for(int num : subVector2){
                cout << num << endl;
            }
            break;
        }
    }

    return 0;
}