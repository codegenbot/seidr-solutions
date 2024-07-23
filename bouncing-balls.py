def bouncing_balls():
    h = float(input())
    f_h = float(input())
    i = f_h / h
    bounces = int(input())
    total_distance = 0
    for _ in range(bounces):
        total_distance += 2 * h
        h *= i
    return format(total_distance, ".6g")


print(bouncing_balls())