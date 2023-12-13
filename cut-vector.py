```python
def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = vector[0]
    for i in range(1, len(vector)):
        if abs(current_sum * 2 - total_sum) <= abs((current_sum + vector[i]) * 2 - total_sum):
            return vector[:i], vector[i:]
        current_sum += vector[i]
    return vector[:len(vector)//2], vector[len(vector)//2:]

print(cut_vector([1, 0]))
print(cut_vector([1, 10]))
print(cut_vector([1, 100]))
print(cut_vector([1, 1000]))
print(cut_vector([1, 10000]))
```