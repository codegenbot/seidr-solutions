```
def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounciness_index = h2 / h1
    
    num_bounces = int(input())
    
    total_distance = 0
    for _ in range(num_bounces):
        total_distance += (h2 * 2) ** 0.5
        h2 /= bounciness_index

    return '{:.4f}'.format(total_distance)

print(bouncing_balls())