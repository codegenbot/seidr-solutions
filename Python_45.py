def triangle_area(a, h):
    return 0.5 * a * h

a, h = map(float, input().split())
print(triangle_area(a, h))