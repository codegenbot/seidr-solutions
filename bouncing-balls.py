````
```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())

    distance = start_height
    for _ in range(num_bounces):
        start_height = (start_height * 2) - (start_height * bounciness_index)
        distance += start_height

    return round(distance, 5)

print(bouncing_balls())
```