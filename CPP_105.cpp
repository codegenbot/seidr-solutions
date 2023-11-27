vector<string> by_length(vector<int> arr){
    map<int, string> num_map = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    vector<int> temp_arr;
    vector<string> result;
    
    // Sort the integers between 1 and 9 inclusive
    for(int i=0; i<arr.size(); i++){
        int num = arr[i];
        if(num >= 1 && num <= 9){
            temp_arr.push_back(num);
        }
    }
    sort(temp_arr.begin(), temp_arr.end());
    
    // Reverse the resulting vector
    reverse(temp_arr.begin(), temp_arr.end());
    
    // Replace each digit by its corresponding name
    for(int i=0; i<temp_arr.size(); i++){
        result.push_back(num_map[temp_arr[i]]);
    }
    
    return result;
}

int main(){
    vector<int> arr = {2, 1, 1, 4, 5, 8, 2, 3};
    vector<string> result = by_length(arr);
    
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}