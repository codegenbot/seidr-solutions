[PYTHON]
def calculate_bounciness_index(starting_height, height_after_first_bounce):
    return height_after_first_bounce / starting_height

def calculate_total_distance_travelled(num_bounces, bounciness_index):
    total_distance = 0.0
    for i in range(1, num_bounces+1):
        distance_traveled = bounciness_index * (i + 1) / (num_bounces - i)
        total_distance += distance_traveled
    return total_distance

def main():
    starting_height, height_after_first_bounce, num_bounces = map(float, input().split())
    bounciness_index = calculate_bounciness_index(starting_height, height_after_first_bounce)
    total_distance_travelled = calculate_total_distance_travelled(num_bounces, bounciness_index)
    print("{:.10f}".format(total_distance_travelled))

if __name__ == "__main__":
    main()
[/PYTHON]
