sort(numbers.begin(), numbers.end());
float min_diff = numbers[1] - numbers[0];
int min_index1 = 0, min_index2 = 1;
for(int i = 1; i < numbers.size() - 1; ++i){
    if(numbers[i+1] - numbers[i] < min_diff){
        min_diff = numbers[i+1] - numbers[i];
        min_index1 = i;
        min_index2 = i+1;
    }
}
vector<float> result = {numbers[min_index1], numbers[min_index2]};
return result;