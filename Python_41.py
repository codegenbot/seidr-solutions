

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.

    assert n > 0
    start = []
    end = []
    for i in range(n):
        start.append(int(input()))
        end.append(int(input()))
    start.sort()
    end.sort()
    i = 0
    j = 0
    result = 0
    while i < n and j < n:
        if end[j] < start[i]:
            result += j
            i += 1
        else:
            j += 1
    result += j * (n - i)
    return result


if __name__ == '__main__':
    print(car_race_collision(3))

    This function outputs the number of such collisions.
    """
