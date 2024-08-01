def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0
    bounces = int(input())
    total_distance = 2 * (1 - math.pow(bounciness_index, -bounces)) * h0
    print(f"{total_distance:.4f}")


if __name__ == "__main__":
    bouncing_balls()