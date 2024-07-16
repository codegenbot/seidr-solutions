def bouncing_ball():
    h1 = float(input())
    h2 = float(input())
    b_index = h2 / h1

    n_bounces = int(input())

    total_distance = 0
    for _ in range(n_bounces):
        h1 = h2
        h2 = h1 * b_index

        if h2 < 0.5:
            break

        total_distance += (h2 - h1) / 2

    return "{:.4f}".format(total_distance)


print(bouncing_ball())