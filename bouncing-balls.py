s_bounce, f_bounce, num_bounces = map(float, input().split())
b_index = f_bounce / s_bounce
total_distance = s_bounce * (1 - b_index**num_bounces) / (1 - b_index)
print(total_distance)