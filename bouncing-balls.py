```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())
    total_distance = (1 + 2 * math.pi) * (start_height ** (num_bounces * 2)) * bounciness_index
    return str(format(total_distance, '.6g'))

print(bouncing_balls())