```
vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float i : l){
        if(i > 0){
            result.push_back(i);
        }
    }
    return result;
}

bool issame(float a, float b, int precision) {
    return abs(a - b) <= (1.0 / pow(10.0, precision));
}

int main() {
    vector<float> numbers = {1.2f, 3.4f, -5.6f, 7.8f};
    
    vector<float> positive_numbers = get_positive(numbers);
    
    for(float number : positive_numbers) {
        bool same = true;
        for(int i = 0; i < positive_numbers.size(); i++) {
            if(!issame(number, positive_numbers[i], 2)) {
                same = false;
                break;
            }
        }
        
        if(same) {
            cout << number << " is the only positive number.\n";
        } else {
            cout << number << " is not the only positive number.\n";
        }
    }
    
    return 0;
}