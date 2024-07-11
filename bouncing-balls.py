```
def bouncing_balls():
    s_height = float(input())
    f_height = float(input())
    bounciness_index = f_height / s_height
    num_bounces = int(input())
    total_distance = 0
    for _ in range(num_bounces):
        s_height = (1 + 2**0.5) * bounciness_index * s_height
        total_distance += 2*s_height  
    return "{:.6f}\n{}".format(bounciness_index, total_distance)


print(bouncing_balls())