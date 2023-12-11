The issue is that the function is not properly handling the rounding of the distances for each bounce. To fix this, you can modify the loop to use the `round` function to round the distance to the nearest integer before adding it to the total distance. Here's an updated version of the code:
```
def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 0
    for i in range(num_bounces):
        distance = (starting_height + (i * bounciness_index))
        total_distance += round(distance)
    return total_distance
```