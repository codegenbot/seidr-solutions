bouncing_balls = lambda: [float(input()) for _ in range(2)] + [int(input())]
bounciness_index, height_after_first_bounce, num_bounces = bouncing_balls()
total_distance = ((1 + bounciness_index) ** num_bounces - 1) / bounciness_index
print(format(total_distance, ".6g"))