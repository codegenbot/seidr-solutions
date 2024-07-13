```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    def calculate_distance(height, bounces):
        if bounces == 0:
            return 0
        distance = (2 * height) + calculate_distance(height - ((height / start_height) * height), bounces - 1)
        return distance

    print(calculate_distance(first_bounce_height, num_bounces))

bouncing_balls()