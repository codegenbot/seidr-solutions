```
import math

def calculate_distance(starting_height, bounce_height, num_bounces):
    bounciness_index = bounce_height / starting_height
    total_distance = 0
    for i in range(num_bounces):
        total_distance += (2 * bounciness_index) ** i
    return total_distance
```