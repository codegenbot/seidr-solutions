```
float mean_absolute_deviation(const vector<float>& numbers) {
  float sum = 0;
  for (auto& num : numbers) {
    sum += std::abs(num - mean(numbers));
  }
  return sum / numbers.size();
}
```
Note: The `mean` function is not defined in the code snippet provided, so it's assumed that it's a predefined function or a part of a different library. If that's not the case, you should define the `mean` function as well.