```
def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    n = int(input())

    bounciness_index = h2 / h1

    def recursive_distance(height, num_bounces):
        if num_bounces == 0:
            return height
        else:
            return height * (1 - bounciness_index) + recursive_distance(height * (1 - bounciness_index), num_bounces - 1)

    total_distance = recursive_distance(h2, n)
    print(format(total_distance, ".4f"))


bouncing_balls()