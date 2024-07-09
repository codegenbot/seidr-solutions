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

bool issame(float a, float b) {
    return (a == b);
}

int main() {
    vector<float> numbers = {1.2f, -3.4f, 5.6f, -7.8f};
    
    vector<float> positive_numbers = get_positive(numbers);

    for (float number : positive_numbers) {
        if (!issame(number, 0)) {
            cout << "The positive numbers are: ";
            break;
        }
    }

    return 0;
}