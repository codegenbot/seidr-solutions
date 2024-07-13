```
def bouncing_ball(height, first_bounce_height):
    bounciness_index = (first_bounce_height / height)
    return round(bounciness_index, 4)

def total_distance(bounces, bounciness_index):
    total_distance = (1 - math.pow(bounciness_index, bounces))
    return round(total_distance, 4)

height = float(input().strip())
first_bounce_height = float(input().strip())
bounces = int(input().strip())

print(round(bouncing_ball(height, first_bounce_height), 4))
print(round(total_distance(bounces, bouncing_ball(height, first_bounce_height)), 4))