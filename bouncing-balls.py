```python
bounciness_index = float(input()) / float(input())
num_bounces = int(input())

distance = 0
height = 1.0
for _ in range(num_bounces):
    height *= 2 - bounciness_index
    distance += height

print(round(distance, 5))