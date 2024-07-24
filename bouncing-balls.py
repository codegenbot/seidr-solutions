def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    total_distance = (bounciness_index**2 + 1) * (1 - bounciness_index**2) ** bounces

    print(total_distance)


if __name__ == "__main__":
    bouncing_balls()