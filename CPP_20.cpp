sort(numbers.begin(), numbers.end());
pair<float, float> closest_pair;
float min_diff = numbers[1] - numbers[0];
for(int i = 1; i < numbers.size(); ++i){
    if(numbers[i] - numbers[i-1] < min_diff){
        min_diff = numbers[i] - numbers[i-1];
        closest_pair = make_pair(numbers[i-1], numbers[i]);
    }
}
return {closest_pair.first, closest_pair.second};