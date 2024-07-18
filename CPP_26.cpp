sort(numbers.begin(), numbers.end());
numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
return numbers;