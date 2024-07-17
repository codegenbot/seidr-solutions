```
def bouncing_balls():
    h = float(input())
    b = float(input())
    bi = b / h
    n = int(input())
    distance = 2 * (1 - math.pow(bi, -n))
    return distance

print(bouncing_balls())