```
def calculate_bounciness():
    height_start = float(input())
    height_first_bounce = float(input())
    bounces = int(input())

    if height_start == 0:
        return "Error: Height cannot be zero"

    bounciness_index = (height_first_bounce / height_start)

    total_distance = 2 * ((1 + bounciness_index) ** bounces - 1) / ((1 + bounciness_index) - 1)

    return str(format(total_distance, ".4f"))