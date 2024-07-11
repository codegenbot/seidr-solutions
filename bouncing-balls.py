```
def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    total_distance = 0

    for _ in range(bounces):
        total_distance += abs(h1)
        if h1 > 0:
            h1 *= -bounciness_index * (1 - 2*h1/h2) 
        else:
            h1 *= -abs(bounciness_index) * (1 - 2*abs(h1)/h2)

    print(f"{total_distance:.6f}")


bouncing_balls()