sort(numbers.begin(), numbers.end());
numbers.resize(distance(numbers.begin(), unique(numbers.begin(), numbers.end())));
return numbers;