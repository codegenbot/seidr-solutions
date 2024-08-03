def bouncing_balls():
    h0 = float(input())  # starting height
    hf = float(input())  # height after first bounce
    bounciness_index = hf / h0

    num_bounces = int(input())  # number of bounces
    total_distance = (2**num_bounces) - 1  # calculate the total distance

    return f"{bounciness_index:.4f}\n{total_distance:.4f}"


print(bouncing_balls())