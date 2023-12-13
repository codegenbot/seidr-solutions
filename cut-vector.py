```python
def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    for i in range(len(vector)-1):
        current_sum += vector[i]
        if current_sum == total_sum - current_sum or current_sum + vector[i+1] == total_sum - current_sum:
            return vector[:i+1], vector[i+1:]
    return vector, [0]

print(cut_vector([1, 0]))
print(cut_vector([1, 10]))
print(cut_vector([1, 100]))
print(cut_vector([1, 1000]))
print(cut_vector([1, 10000]))
```