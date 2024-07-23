```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = (first_bounce_height / start_height)
    num_of_bounces = int(input())
    total_distance = ((2**0.5) * bounciness_index)**num_of_bounces
    return round(total_distance, 6)

print(bouncing_balls())