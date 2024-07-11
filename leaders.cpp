using namespace std;

std_vector<int> leaders(std_vector<int>& arr) {
    std_vector<int> result;
    int maxRight = arr.back();
    for(int i = 0; i < arr.size(); i++) {
        if(i == arr.size() - 1 || arr[i] >= maxRight)
            result.push_back(arr[i]);
        else 
            maxRight = arr[i];
    }
    return result;
}