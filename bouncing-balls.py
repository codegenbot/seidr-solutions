```python
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    for i in range(num_bounces):
        distance_per_bounce = start_height * (1 + bounciness_index) / (2 ** (i + 1))
        total_distance += distance_per_bounce * 2

    return round(total_distance, 4)

print(bouncing_balls())