sort(numbers.begin(), numbers.end());
float minDiff = numbers[1] - numbers[0];
pair<float, float> closestElements = {numbers[0], numbers[1]};
for(int i = 1; i < numbers.size() - 1; i++){
    float diff = numbers[i + 1] - numbers[i];
    if(diff < minDiff){
        minDiff = diff;
        closestElements = {numbers[i], numbers[i + 1]};
    }
}
return {closestElements.first, closestElements.second};