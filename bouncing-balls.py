def bouncing_balls():
    s_height = float(input())
    b_height = float(input())
    index = b_height / s_height
    n_bounces = int(input())
    total_distance = 2 * (1 + index) ** n_bounces - 1
    return total_distance


print(bouncing_balls())