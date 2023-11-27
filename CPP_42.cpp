#include <vector>

vector<int> incr_list(vector<int> l);

vector<int> incr_list(vector<int> l){
    vector<int> result;
    for(int i=0; i<l.size(); i++){
        result.push_back(l[i]+1);
    }
    return result;
}

int main() {
    // Test the incr_list function
    vector<int> input = {1, 2, 3, 4, 5};
    vector<int> output = incr_list(input);
    
    // Print the output
    for(int i=0; i<output.size(); i++){
        cout << output[i] << " ";
    }
    
    return 0;
}