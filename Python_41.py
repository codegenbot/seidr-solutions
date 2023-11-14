

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.
    answer = 0
    # First, get the minimum distance between each car.
    min_dist = min(n, n)
    # You can assume that n > 0.
    if n > 0:
        # Next, get the distance between each car.
        dist = []
        for i in range(n):
            dist.append((i + 1) * min_dist)

        # Now, for each distance, check if there is a collision.
        for i in range(n):
            for j in range(i + 1, n):
                if dist[i] == dist[j]:
                    answer += 1

    return answer

    This function outputs the number of such collisions.
    """
