def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    total_distance = (h1 + h2) * 2 * bounces

    print(f"{bounciness_index:.3f}")
    print(f"{total_distance:.6f}")


bouncing_balls()